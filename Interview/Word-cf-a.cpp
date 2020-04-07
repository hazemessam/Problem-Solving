#include <bits/stdc++.h>
using namespace std;

int main()
{
	int u = 0, l = 0;
	string str;
	cin >> str;
	int len = str.length();
	for (int i = 0; i < len; i++)
		if (isupper(str[i]))
			u++;
		else
			l++;
	if (u > l)
		for (int i = 0; i < len; i++)
			str[i] = toupper(str[i]);
	else
		for (int i = 0; i < len; i++)
			str[i] = tolower(str[i]);
	cout << str << endl;
}