#include<iostream>
using namespace std;

int diff(int x, int y=0)
{
    if(x>y)
        return x-y;
    else if(y>x)
        return y-x;
    else
        return 0; 
}

int main()
{
    int x, y, p;
    for(int row=1 ; row<=5 ; row++)
        for(int col=1 ; col<=5 ; col++)
        {
            cin >> p;
            if(p == 1)
            {
                x=row;
                y=col;
            }
        }
    cout<< diff(x, 3) + diff(y, 3) <<endl;
}
