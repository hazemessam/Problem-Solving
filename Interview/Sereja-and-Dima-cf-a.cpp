#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, s_points = 0, d_points = 0;
	cin >> n;
	vector <int> cards(n);
	for (int i = 0; i < n; i++)
		cin >> cards[i];
	for (int i = 0, l_pointer = 0, r_pointer = n - 1; i < n; i++)
		if (i % 2 == 0)
			if (cards[l_pointer] > cards[r_pointer])
				s_points += cards[l_pointer++];
			else
				s_points += cards[r_pointer--];
		else
			if (cards[l_pointer] > cards[r_pointer])
				d_points += cards[l_pointer++];
			else
				d_points += cards[r_pointer--];
	cout << s_points << ' ' << d_points << endl;	
}