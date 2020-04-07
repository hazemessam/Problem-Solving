#include <bits/stdc++.h>
using namespace std;

int num_of_teams(int, int, int);

int main()
{
	int n;
	cin >> n;
	vector<int> children(n), v1, v2, v3;
	for (int i = 0, child; i < n; i++)
	{
		cin >> child;
		if (child == 1)
			v1.push_back(i + 1);
		else if (child == 2)
			v2.push_back(i + 1);
		else
			v3.push_back(i + 1);
	}
	n = num_of_teams(v1.size(), v2.size(), v3.size());
	cout << n << endl;
	if(n)
		for (int i = 0; i < n; i++)
			cout << v1[i] << ' ' << v2[i] << ' ' << v3[i] << endl;
}

int num_of_teams(int n1, int n2, int n3)
{
	int nums[2] = { n2, n3 };
	int min = n1;
	for (int i = 0; i < 2; i++)
		if (nums[i] < min)
			min = nums[i];
	return min;
}