#include <bits/stdc++.h>
using namespace std;

int main()
{
	int needed_cakes, cycle_time, cycle_cakes, d, p1_cakes = 0, p1_time = 0, p2_cakes = 0, p2_time = 0;
	cin >> needed_cakes >> cycle_time >> cycle_cakes >> d;
	// one oven
	while (p1_cakes < needed_cakes)
	{
		p1_time += cycle_time;
		p1_cakes += cycle_cakes;
	}
	// two ovens
	int o2_time = 0;
	while (p2_cakes < needed_cakes)
	{
		p2_time++;
		if (p2_time > d)
		{
			o2_time++;
			if (o2_time % cycle_time == 0)
				p2_cakes += cycle_cakes;
		}
		if (p2_time % cycle_time == 0)
			p2_cakes += cycle_cakes;
	}
	if (p2_time < p1_time)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}