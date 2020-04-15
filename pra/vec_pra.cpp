#include <bits/stdc++.h>
using namespace std;

int		main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.erase(v.end() - 1);
	for (auto a: v)
		cout << a << endl;
}
