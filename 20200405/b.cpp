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
	int n; cin >> n;
	vector<int> xr;
	vector<int> xb;
	vector<int> cr(n);
	vector<int> cb(n);
	//int num = 0
	for (int i = 0; i < n; i++)
	{
		int num; cin >> num;
		char c; cin >> c;
		if (c == 'R')
		{
			xr.push_back(num);
		}
		else
		{
			xb.push_back(num);
		}
		
	}
	sort(xr.begin(), xr.end());
	sort(xb.begin(), xb.end());
	
	for (auto a: xr) cout << a << endl;
	for (auto a: xb) cout << a << endl;

}

