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
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<string> vS;
typedef vector<pll> vll;
typedef map<ll,ll> Mll;
typedef set<ll> SETl;


int		main()
{
	int n, m; cin >> n >> m;
	priority_queue<pll> pq;
	rep(i, n)
	{
		ll a; cin >> a;
		pq.emplace(a, 1);
	}

}

