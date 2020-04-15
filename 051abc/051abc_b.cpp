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
	int k, s; cin >> k >> s;
	int ans = 0;
	for (int i = 0; i <= k; i++)
	{
		for (int j = 0; j <= k; j++)
		{
			int a = s - i - j;
			if (a > k || a < 0) continue;
			ans++;
		}
	}
	cout << ans << endl;
}

