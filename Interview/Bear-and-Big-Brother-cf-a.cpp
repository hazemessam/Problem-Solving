#include<iostream>
using namespace std;

int main()
{
	int a, b, y = 0;
	cin >> a >> b;
	while (b >= a)
	{
		a *= 3;
		b *= 2;
		y++;
	}
	cout << y << endl;
}