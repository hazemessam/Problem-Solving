#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, counter = 1;
	string l_magnet, r_magnet;
	cin >> n;
	cin >> l_magnet;
	for (int i = 0; i < n - 1; i++)
	{
		cin >> r_magnet;
		if (l_magnet[1] == r_magnet[0])
			counter++;
		l_magnet = r_magnet;
	}
	cout << counter << endl;
}