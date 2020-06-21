#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k, r, shovels = 1;
	cin >> k >> r;
	while (!( (shovels * k)  % 10 == 0 || (shovels * k - r) % 10 == 0))
		shovels++;
	cout << shovels << endl;
}