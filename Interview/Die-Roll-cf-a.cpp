#include <bits/stdc++.h>
using namespace std;

void div_frac(int* a, int* b)
{
	for (int i = 6; i > 1; i--)
		if (*a % i == 0 && *b % i == 0)
		{
			*a /= i;
			*b /= i;
			break;
		}
}

int main()
{
	int n1, n2, n, b = 6;
	cin >> n1 >> n2;
	n = max(n1, n2);
	n = 6 - n + 1;
	div_frac(&n, &b);
	cout << n << '/' << b << endl;
}