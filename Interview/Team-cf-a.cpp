#include<iostream>
using namespace std;

int main()
{
	int n, suc_counter = 0;
	cin >> n;
	for (int i = 0, counter; i < n; i++)
	{
		counter = 0;
		for (int j = 0, temp; j < 3; j++)
		{
			cin >> temp;
			if (temp)
				counter++;
		}
		if (counter >= 2)
			suc_counter++;
	}
	cout << suc_counter << endl;
}