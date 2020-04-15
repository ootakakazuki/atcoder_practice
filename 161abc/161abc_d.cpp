#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int		main()
{
	ll k; cin >> k;
	ll dai = 1e18;
	ll count = 0;
	ll res = 0;
	for (ll ii = 1; count < k; )
	{
		ll i = ii;
		bool f = true;
		
		ll tmp = i % 10;
		i /= 10;
		while (i)
		{
			//cout << "hoge" << endl;
			if (abs(tmp - (i % 10)) > 1)
			{
				f = false;
			}
			tmp = i % 10;
			i /= 10;
		}
		//cout << "ii=" << ii << endl;
		if (f)
		{
			res = ii;
			ii++;
			count++;
		}
		else
		{
			ii += 8;
		}
	}
	cout << res << endl;
}

