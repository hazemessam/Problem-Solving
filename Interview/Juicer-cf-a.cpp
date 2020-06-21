#include <bits/stdc++.h>
using namespace std; 

int main()
{
	signed int num_of_orgs, machine_size, waste_size, waste= 0, counter = 0;
	cin >> num_of_orgs >> machine_size >> waste_size;
	for (int i = 0, org; i < num_of_orgs; i++)
	{
		cin >> org;
		if (org <= machine_size)
		{
			waste += org;
			if (waste > waste_size)
			{
				waste = 0;
				counter++;
			}
		}
	}	
	cout << counter << endl;
}