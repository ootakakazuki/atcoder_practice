
#include <bits/stdc++.h>
#define REP(i,x) for(int i=0;i<(int)(x);i++)
#define REPS(i,x) for(int i=1;i<=(int)(x);i++)i
typedef long long ll;

using namespace std;


ll		keta(ll num)
{
	ll		res = 1;
	while (num >= 10)
	{
		res++;
		num /= 10;
	}
	return res;
}

int		main()
{
	ll N; cin >> N;
	ll res = keta(N);
	ll j = 0;

	for (ll i = 1; i * i <= N; i++)
	{
		if (N % i != 0) continue;
		j = N / i;
		res = min(res, max(keta(i), keta(j)));
		cout << res << " " << i << " " << j << endl;
	}
	cout << res << endl;
}

