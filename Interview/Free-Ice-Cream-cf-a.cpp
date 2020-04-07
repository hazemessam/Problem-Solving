#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n, packs, distress = 0;
	cin >> n >> packs;
	char mag;
	for (int i = 0, d; i < n; i++)
	{
		cin >> mag >> d;
		if (mag == '+')
			packs += d;
		else
			if (packs >= d)
				packs -= d;
			else
				distress++;
	}
	cout << packs << ' ' << distress << endl;
		
}