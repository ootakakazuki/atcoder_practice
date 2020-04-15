#include <bits/stdc++.h>
using namespace std;
# define fills(x,y) memset(x,y,sizeof x)
# define ALL(v) (v).begin(), (v).end()
# define SZ(x) ((int)(x).size)
# define pb push_back
# define INF (int)1e9
# define EPS 1e-9
# define rep(i,n) for(int i=0;i<n;++i)
# define REP(i,k,n) for(int i=k;i<=n;++i)
# define mod 1000000007

typedef long long ll;
typedef pair<ll, ll> Pll;
typedef vector<ll> Vl;
typedef vector<Vl> VVl;
typedef vector<string> VS;
typedef vector<Pll> Vll;
typedef map<ll,ll> Mll;
typedef set<ll> SETl;


int		main()
{
	ll N; cin >> N;
	vector<ll> v1;
	vector<ll> v2;
	for (int i = 0; i < N; i++)
	{
		ll a; cin >> a;
		if (i % 2 == 0)
		{
			v1.push_back(a);
		}
		else
		{
			v2.push_back(a);
		}
	}
	sort(v1.rbegin(), v1.rend());
	sort(v2.rbegin(), v2.rend());
	ll res = 0;
	ll res2 = 0;
	for (int i = 0; i < N/2; i++)
	{
		//cout << "v1[" << i << "]=" << v1[i] << endl;
		if (v1[i] <= 0) continue;
		res += v1[i];
	}
	for (int i = 0; i < N/2; i++)
	{
		//cout << "v2[" << i << "]=" << v2[i] << endl;
		if (v2[i] <= 0) continue;
		res2 += v2[i];
	}
	cout << max(res, res2) << endl;
}

