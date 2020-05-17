#include <bits/stdc++.h>
using namespace std;
# define mod 1000000007
typedef long long ll;
#include <cmath>
#include <limits>
#include <iostream>


int		main()
{
	ll x; cin >> x;
	//int ans = ((log10(x)-2)/(log10(1.01))) + 1;
	//cout << ans << endl;
	//cout << log10(2) << endl;
	ll y = 100;
	for (int i = 1; i < 1000000000; i++)
	{
		y = y*1.01;
		if (y >= x)
		{
			cout << i << endl;
			return 0;
		}
	}
}

