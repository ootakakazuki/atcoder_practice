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


int		gcd(int a, int b)
{
	if (b == 0)return a;
	return (a, b % a);
}

int		main()
{
	
//	cout << __gcd(30, 105) << endl;
//	cout << __gcd(105, 30) << endl;
	
	int K; cin >> K;
	ll res = 0;
	for (int i = 1; i <=K; i++)
	{
		for (int j = 1; j <=K; j++)
		{
			for (int k = 1; k <=K; k++)
			{
				res += __gcd(i, __gcd(j, k));
			}
		}
	}
	cout << res << endl;
	
}

