#include <bits/stdc++.h>
using namespace std;
# define mod 1000000007
typedef long long ll;

int		main()
{
	int a, b, c, d; cin >> a >> b >> c >> d;
	while (a > 0 && c > 0)
	{
		c -= b;
		if (c <= 0)
		{
			cout << "Yes" << endl;
			return 0;
		}
		a -= d;
		if (a <= 0)
		{
			cout << "No" << endl;
			return 0;
		}
	}
}

