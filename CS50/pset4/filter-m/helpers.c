#include "helpers.h"
#include "math.h"

#define true 1
#define false 0

typedef char bool;

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int x = 0; x < height; x++)
        for (int y = 0; y < width; y++)
        {
            int average = round((image[x][y].rgbtRed + image[x][y].rgbtGreen + image[x][y].rgbtBlue) / (float)3);
            image[x][y].rgbtRed = average;
            image[x][y].rgbtGreen = average;
            image[x][y].rgbtBlue = average;
        }
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int x = 0; x < height; x++)
    {
        for (int y = 0; y < width; y++)
        {
            int originalRed = image[x][y].rgbtRed;
            int originalGreen = image[x][y].rgbtGreen;
            int originalBlue = image[x][y].rgbtBlue;

            int sepiaRed = round(.393 * originalRed + .769 * originalGreen + .189 * originalBlue);
            int sepiaGreen = round(.349 * originalRed + .686 * originalGreen + .168 * originalBlue);
            int sepiaBlue = round(.272 * originalRed + .534 * originalGreen + .131 * originalBlue);

            image[x][y].rgbtRed = (sepiaRed <= 255 ) ? sepiaRed : 255;
            image[x][y].rgbtGreen =(sepiaGreen <= 255 ) ? sepiaGreen : 255;
            image[x][y].rgbtBlue = (sepiaBlue <= 255 ) ? sepiaBlue : 255;
        }
    }
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int x = 0; x < height; x++)
    {
        RGBTRIPLE tempPixels[width];
        for (int y = 0; y < width; y++)
        {
            tempPixels[y].rgbtRed = image[x][y].rgbtRed;
            tempPixels[y].rgbtGreen = image[x][y].rgbtGreen;
            tempPixels[y].rgbtBlue = image[x][y].rgbtBlue;
        }
        for (int imgY = 0, tempY = width-1; imgY < width; imgY++, tempY--)
        {
            image[x][imgY].rgbtRed = tempPixels[tempY].rgbtRed;
            image[x][imgY].rgbtGreen = tempPixels[tempY].rgbtGreen;
            image[x][imgY].rgbtBlue = tempPixels[tempY].rgbtBlue;
        }
    }
}

// make the pixel blur
void blurPixel(int height, int width, RGBTRIPLE image[height][width], RGBTRIPLE originalImage[height][width], int pixelX, int pixelY)
{
    int redSum = 0, greenSum = 0, blueSum = 0, pixelsCount = 0;
    for (int x = pixelX-1; x <= pixelX+1; x++)
        for (int y = pixelY-1; y <= pixelY+1; y++)
            if (x >= 0 && x < height && y >= 0 && y < width)
            {
                redSum += originalImage[x][y].rgbtRed;
                greenSum += originalImage[x][y].rgbtGreen;
                blueSum += originalImage[x][y].rgbtBlue;
                pixelsCount++;
            }

    int redAverage = round((float)redSum/pixelsCount);
    int greenAverage = round((float)greenSum/pixelsCount);
    int blueAverage = round((float)blueSum/pixelsCount);

    image[pixelX][pixelY].rgbtRed = (redAverage <= 255) ? redAverage : 255;
    image[pixelX][pixelY].rgbtGreen = (greenAverage <= 255) ? greenAverage : 255;
    image[pixelX][pixelY].rgbtBlue = (blueAverage <= 255) ? blueAverage : 255;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE originalImage[height][width];
    for (int x = 0; x < height; x++)
        for (int y = 0; y < width; y++)
        {
            originalImage[x][y].rgbtRed = image[x][y].rgbtRed;
            originalImage[x][y].rgbtGreen = image[x][y].rgbtGreen;
            originalImage[x][y].rgbtBlue = image[x][y].rgbtBlue;
        }

    for (int x = 0; x < height; x++)
        for (int y = 0; y < width; y++)
            blurPixel(height, width, image, originalImage, x, y);
}

// Set pixel to make a edged image
void setPixeltoEdge(int height, int width, RGBTRIPLE image[height][width], RGBTRIPLE originalImage[height][width], int pixelX, int pixelY)
{
    int gofXRed = 0, gofXGreen = 0, gofXBlue = 0, gofYRed = 0, gofYGreen = 0, gofYBlue = 0;
    
    // Calc g(x) for red, green and blue
    for (int x = pixelX-1, offsetX = 0; x <= pixelX+1; x++, offsetX++)
        for (int y = pixelY-1, offsetY = 0; y <= pixelY+1; y++, offsetY++)
            if (x >= 0 && x < height && y >= 0 && y < width)
            {
                int factor = 0;
                if (offsetX == 0 && offsetY == 0)
                    factor = -1;
                else if (offsetX == 0 && offsetY == 2)
                    factor = 1;
                else if (offsetX == 1 && offsetY == 0)
                    factor = -2;
                else if (offsetX == 1 && offsetY == 2)
                    factor = 2;
                else if (offsetX == 2 && offsetY == 0)
                    factor = -1;
                else if (offsetX == 2 && offsetY == 2)
                    factor = 1;

                gofXRed += factor * originalImage[x][y].rgbtRed;
                gofXGreen += factor * originalImage[x][y].rgbtGreen;
                gofXBlue += factor * originalImage[x][y].rgbtBlue;
            }

    // Calc g(y) for red, green and blue
    for (int x = pixelX-1, offsetX = 0; x <= pixelX+1; x++, offsetX++)
        for (int y = pixelY-1, offsetY = 0; y <= pixelY+1; y++, offsetY++)
            if (x >= 0 && x < height && y >= 0 && y < width)
            {
                int factor = 0;
                if (offsetX == 0 && offsetY == 0)
                    factor = -1;
                else if (offsetX == 0 && offsetY == 1)
                    factor = -2;
                else if (offsetX == 0 && offsetY == 2)
                    factor = -1;
                else if (offsetX == 2 && offsetY == 0)
                    factor = 1;
                else if (offsetX == 2 && offsetY == 1)
                    factor = 2;
                else if (offsetX == 2 && offsetY == 2)
                    factor = 1;
    
                gofYRed += factor * originalImage[x][y].rgbtRed;
                gofYGreen += factor * originalImage[x][y].rgbtGreen;
                gofYBlue += factor * originalImage[x][y].rgbtBlue;
            }
    int redIntensity = round(sqrt(pow(gofXRed, 2) + pow(gofYRed, 2)));
    int greenIntensity = round(sqrt(pow(gofXGreen, 2) + pow(gofYGreen, 2)));
    int blueIntensity = round(sqrt(pow(gofXBlue, 2) + pow(gofYBlue, 2)));

    image[pixelX][pixelY].rgbtRed = (redIntensity <= 255) ? redIntensity : 255;
    image[pixelX][pixelY].rgbtGreen = (greenIntensity <= 255) ? greenIntensity : 255;
    image[pixelX][pixelY].rgbtBlue = (blueIntensity <= 255) ? blueIntensity : 255;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE originalImage[height][width];
    for (int x = 0; x < height; x++)
        for (int y = 0; y < width; y++)
        {
            originalImage[x][y].rgbtRed = image[x][y].rgbtRed;
            originalImage[x][y].rgbtGreen = image[x][y].rgbtGreen;
            originalImage[x][y].rgbtBlue = image[x][y].rgbtBlue;
        }

    for (int x = 0; x < height; x++)
        for (int y = 0; y < width; y++)
            setPixeltoEdge(height, width, image, originalImage, x, y);
}
