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
	int N; cin >> N;
	ll res = 0;
	int i = 1;
	while (i <= N)
	{
		if (i % 15 == 0 || i % 3 == 0 || i % 5 == 0)
		{
			i++;	
			continue;
		}
		res += i;
		i++;
	}
	cout << res << endl;
}

