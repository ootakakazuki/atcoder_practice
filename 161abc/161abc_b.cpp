#include <bits/stdc++.h>
using namespace std;

int		main()
{
	int n;
	double m;
	cin >> n >> m;
	vector<int> v(n);
	double total = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		total += v[i];
	}
	int c = 0;
	double hoge = total / (4.0 * m);
	//cout << hoge << endl;
	for (int i = 0; i < n; i++)
	{
		if (v[i] >= hoge)c++;
	}
	cout << (c >= m ? "Yes" : "No") << endl;
	
}

