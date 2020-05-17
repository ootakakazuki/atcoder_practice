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
	ll n, q; cin >> n >> q;
	vector<ll> v(n, 0);
	for (int i = 2;i <= n; i++)
	{
		ll c; cin >> c;
		v[i] = v[i - 1] + c;
	}
	//for (int i = 1;i < n; i++)cout << "v[" << i << "]=" << v[i] << endl;
	ll ans = 0;
	ll cur = 1;
	for (int i = 0; i < q; i++)
	{
		ll a; cin >> a;
		ans = (ans + abs(v[cur + a] - v[cur])) % 100000;
		cur += a;
	}
	cout << ans << endl;
}

