#include<iostream>
using namespace std;

int main()
{
	int n, h, w = 0;
	cin >> n >> h;
	for (int i = 0, temp; i < n; i++)
	{
		cin >> temp;
		if (temp > h)
			w += 2;
		else
			w++;
	}
	cout << w << endl;
}