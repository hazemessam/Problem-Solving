#include <bits/stdc++.h>
using namespace std;

int main()
{
	int counter = 0;
	string name;
	cin >> name;
	sort(name.begin(), name.end());

	for (int i = 0, len = name.length(); i < len; i++)
		if (name[i] != name[i + 1])
			counter++;
	if (counter % 2 == 0)
		cout << "CHAT WITH HER!" << endl;
	else
		cout << "IGNORE HIM!" << endl;
}