#include <bits/stdc++.h>
using namespace std;

int main()
{
	int counter = 0;
	string s;
	cin >> s;
	vector<char> chars;
	for (int i = 0; i < s.size(); i++)
		if (s[i] == '}')
			break;
		else if (s[i] == '{' || s[i] == ',' || s[i] == ' ')
			continue;
		else
			chars.push_back(s[i]);
	sort(chars.begin(), chars.end());
	for (int i = 0; i < chars.size() - 1; i++)
		if (chars[i] == chars[i + 1])
			counter++;
	cout << counter << endl;
}