#include <bits/stdc++.h>
using namespace std;

int main()
{
	int calories = 0, screens[4];
	string s;
	for (int i = 0; i < 4; i++)
		cin >> screens[i];
	cin >> s;
	for (int i = 0, n = s.length(); i < n; i++)
		switch (s[i])
		{
			case '1':
				calories += screens[0];
				break;
			case '2':
				calories += screens[1];
				break;
			case '3':
				calories += screens[2];
				break;
			case '4':
				calories += screens[3];
				break;
		}
	cout << calories << endl;
}