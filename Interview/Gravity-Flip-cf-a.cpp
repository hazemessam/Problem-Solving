#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <int> cols(n);
	for (int i = 0; i < n; i++)
		cin >> cols[i];
	sort(cols.begin(), cols.end());
	for (int i = 0; i < n; i++)
		cout << cols[i] << " ";
}