#include <bits/stdc++.h>
using namespace std;

int main()
{
	string alpha = "abcdefghijklmnopqrstuvwxyz", password;
	int n, d;
	cin >> n >> d;
	for (int i = 0, idx = 0; i < n; i++, idx++)
	{
		if (idx > d - 1) idx = 0;
		password += alpha[idx];
	}
	cout << password << endl;
}