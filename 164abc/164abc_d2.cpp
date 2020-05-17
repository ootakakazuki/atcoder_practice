#include <bits/stdc++.h>
using namespace std;
# define mod 1000000007
typedef long long ll;

int		main()
{
	string s; cin >> s;
	ll tmp = 0;
	ll res = 0;
	for (int i = 0; i < s.size(); i++)
	{
		int c = 0;
		tmp = 0;
		for (ll j = i; c < 20 && j < s.size(); j++, c++)
		{
			tmp = tmp * 10 + s[j] - '0';
			cout << tmp << endl;
			if (tmp != 0 && tmp % 2019 == 0)
			{
				//cout << tmp << endl;
				res++;
				//tmp = a - '0';
			}
		}
	}
	cout << res << endl;
}

