#include <bits/stdc++.h>
using namespace std;

int main()
{
	int num_of_wires, num_of_shoots;
	cin >> num_of_wires;
	vector<int> birds(num_of_wires);
	for (int i = 0; i < num_of_wires; i++)
		cin >> birds[i];
	cin >> num_of_shoots;
	for (int i = 0, wire, bird; i < num_of_shoots; i++)
	{
		cin >> wire;
		cin >> bird;
		wire--;
		if (wire - 1 >= 0)
			birds[wire - 1] += bird - 1;
		if(wire + 1 <= num_of_wires - 1)
			birds[wire + 1] += birds[wire] - bird;
		birds[wire] = 0;
	}
	for (int i = 0; i < num_of_wires; i++)
		cout << birds[i] << endl;
}