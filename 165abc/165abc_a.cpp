#include <bits/stdc++.h>
using namespace std;
# define mod 1000000007
typedef long long ll;

int		main()
{
	int k, a, b; cin >> k  >>  a >> b;
	for (int i = a; i <= b; i++)
	{
		if (i % k == 0)
		{
			cout << "OK" << endl;
			return 0;
		}
	}	
	cout << "NG" << endl;
}

