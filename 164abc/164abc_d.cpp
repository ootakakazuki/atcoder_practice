#include <bits/stdc++.h>
using namespace std;
# define mod 1000000007
typedef long long ll;

int		main()
{
	string s; cin >> s;
	ll tmp = 0;
	ll res = 0;
	for (auto a: s)
	{
		for (ll i = 0; i < 18; i++)
		{
			tmp = tmp * 10 + a - '0';
			if (tmp % 2019 == 0)
			{
				res++;
				tmp = a - '0';
			}
		}
	}
	cout << res << endl;
}

