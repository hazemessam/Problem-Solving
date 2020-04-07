#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s, sum;
	cin >> s;
	vector<int> idxs;
	for (int i = 0, len = s.size(); i < len; i++)
		if (s[i] == '+')
			idxs.push_back(i);
		else
			sum.push_back(s[i]);
	sort(sum.begin(), sum.end());
	for (int i = 0, len = idxs.size(); i < len; i++)
		sum.insert(idxs[i], "+");
	cout << sum << endl;

}