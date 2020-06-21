#include <bits/stdc++.h>
using namespace std;

int main()
{
	int position = 1;
	string stones, instructions;
	cin >> stones >> instructions;
	for (int i = 0, n = instructions.length(); i < n; i++)
		if (instructions[i] == stones[position - 1])
			position++;
	cout << position << endl;
}