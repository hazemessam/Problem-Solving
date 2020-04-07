#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> cities(n);
	for (int i = 0; i < n; i++)
		cin >> cities[i];
	int min_r_case, min_l_case, max_r_case, max_l_case;
	for (int i = 0, min_cost, max_cost; i < n; i++)
	{
		if (i == 0)
		{
			min_cost = cities[i + 1] - cities[i];
			max_cost = cities[n - 1] - cities[i];
		}
		else if (i == n - 1)
		{
			min_cost = cities[i] - cities[i - 1];
			max_cost = cities[i] - cities[0];
		}
		else
		{
			min_r_case = cities[i + 1] - cities[i];
			min_l_case = cities[i] - cities[i - 1];
			min_cost = min(min_r_case, min_l_case);	
			max_r_case = cities[n - 1] - cities[i];
			max_l_case = cities[i] - cities[0];
			max_cost = max(max_r_case, max_l_case);
		}
		cout << min_cost << ' ' << max_cost << endl;
	}
}