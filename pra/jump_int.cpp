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


void	dfs(int num, set<int> &se, int tmp)
{
	cout << tmp << endl;
	if (tmp > num) return ;
	if (se.count(tmp)) return ;
	se.insert(tmp);
	cout << "new!" << endl;
	int t = tmp % 10;
	if (t == 0) dfs(num, se, tmp * 10 + t + 1);
	else if (t == 9) dfs(num, se, tmp * 10 + t - 1);
	else
	{
		dfs(num, se, tmp * 10 + t - 1);
		dfs(num, se, tmp * 10 + t + 1);
	}
}

int		main()
{
	int num; cin >> num;
	set<int> se; //= { 2, 3, 4, 5, 6 ,7, 8, 9};
	int tmp = 1;
	for (int i = 0; i < 10; i++)
	{
		cout << "i=" << i << endl;
		dfs(num, se, i);
	}

	for(auto a: se)
	{
		cout << a << " ";
	}
	cout << endl;
	
}

