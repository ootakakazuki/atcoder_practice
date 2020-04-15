#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int		main()
{
	ll n, k; cin >> n >> k;
	ll a = n % k;
	ll b = abs(a - k);
	cout << min(a, b) << endl;
}

