#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int		main()
{
	ll H, W; cin >> H >> W;

	if (H % 2 == 0 || W % 2 == 0)
	{
		if (H % 2 == 0)
		{
			cout << (H / 2) * W << endl;
		}
		else
		{
			cout << (W / 2) * H << endl;
			
		}
	}
	else
	{
		cout << (H * W)/2 + 1 << endl;
	}
}

