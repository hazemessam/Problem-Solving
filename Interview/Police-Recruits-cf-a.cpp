#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, police = 0, crimes = 0;
	cin >> n;
	for (int i = 0, temp; i < n; i++)
	{
		cin >> temp;
		if (temp > 0)
			police += temp;
		else
			if (police > 0)
				police--;
			else
				crimes++;
	}
	cout << crimes << endl;
}