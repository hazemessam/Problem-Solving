#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> frinds(n);
	for (int i = 0, frind; i < n; i++)
	{
		cin >> frind;
		frinds[frind - 1] = i + 1;
	}
	for (int i = 0; i < n; i++)
		cout << frinds[i] << ' ';
	cout << endl;
}