#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<string> words;
	string word;
	for (int i = 0; i < n; i++)
	{
		cin >> word;
		if (word.size() > 10)
			word = word.front() + to_string(word.size() - 2) + word.back();
		words.push_back(word);
	}
	for (int i = 0; i < n; i++)
		cout << words[i] << endl;
}