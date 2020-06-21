#include<iostream>
using namespace std;

int main()
{
	int x, y;
	for (int row = 1; row <= 5; row++)
	{
		for (int col = 1, temp; col <= 5; col++)
		{
			cin >> temp;
			if (temp)
			{
				x = row;
				y = col;
			}
		}
	}
	cout << abs(x - 3) + abs(y - 3) << endl;
}