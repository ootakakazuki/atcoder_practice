#include <bits/stdc++.h>
using namespace std;

// SABEDZ
// ZABWZ

int		main()
{
	string s; cin >> s;
	int x = 200003;
	int y = 0;
	int f = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'A')
		{
			x = min(x, i);
			f = 1;
		}
		if (s[i] == 'Z' && f)
		{
			y = max(y, i);
		}
	}
//	cout << y << endl;
//	cout << x << endl;
	cout << y - x + 1 << endl;
}
