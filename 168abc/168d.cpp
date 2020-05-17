#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
# define mod 1000000007
# define vi vector<ll>
# define vvi vector<vi>
# define rep(i, N) for (int i = 0; i < N; i++)
# define Rep(i, N) for (int i = 1; i <= N; i++)
# define deb(x) cerr << #x << ": " << x << endl;
# define deb2(x, i) cerr << #x << "[" << i << "]: " << x[i] << endl;
/*
vi v(10, 2); 
rep(i, 10) deb2(v, i); 
*/

/*
int a; cin >> a;
int a, b; cin >> a >> b;
rep(i, n){cin >> v[i];}
cout <<   << endl;
*/
vector<int> g[200005];
int par[200005];

signed		main()
{
	int n, m; cin >> n >> m;
	for (int i = 0; i < m; i++)

	{
		int a, b;
		cin >> a >> b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	vector<int> ans;
	
	queue<int> q;
	q.push(1);
	par[1] = 1;

	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		for (auto nv: g[u])if (!par[nv])
		{
			q.push(nv);
			par[nv] = u;
		}
	}
	puts("Yes");
	for (int i = 2; i <= n; i++) cout << par[i] << endl;
}

