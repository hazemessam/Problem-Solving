#include <iostream>
using namespace std;

int main()
{
	int n, a_counter = 0, d_counter = 0;
	string game;
	cin >> n;
	cin >> game;
	for (int i = 0; i < n; i++)
		if (game[i] == 'A')
			a_counter++;
		else
			d_counter++;
	if (a_counter > d_counter)
		cout << "Anton" << endl;
	else if (d_counter > a_counter)
		cout << "Danik" << endl;
	else
		cout << "Friendship" << endl;
}