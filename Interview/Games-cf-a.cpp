#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, counter = 0;
	cin >> n;
	//int games[n][2];
	vector <vector<int>> games(n);
	for (int row = 0; row < n; row++)
	{
		games[row].resize(2);
		for (int col = 0; col < 2; col++)
			cin >> games[row][col];
	}
	for (int c1_row = 0; c1_row < n; c1_row++)
		for (int c2_row = 0; c2_row < n; c2_row++)
			if (games[c1_row][0] == games[c2_row][1])
				counter++;
	cout << counter << endl;
}