#include <bits/stdc++.h>
using namespace std;

int main()
{
	int shoes[4], counter = 0;
	for (int i = 0; i < 4; i++)
		cin >> shoes[i];
	sort(shoes, shoes + 4);
	for (int i = 0; i < 3; i++)
		if (shoes[i] == shoes[i + 1])
			counter++;
	cout << counter << endl;
}