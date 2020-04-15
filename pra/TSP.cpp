#include <bits/stdc++.h>
using namespace std;

int inf = 1e9 + 7;

int dp[1000][1000];
int dist[15][15];

int n, m;

void	bi_pri(int n)
{
	int hoge[20];
	int i = 0;
	while (n)
	{
		hoge[i++] = n % 2;
		n /= 2;
	}
	while (i)
	{
		cout << hoge[--i];
	}
	cout << endl;
}

int		dfs(int s, int v)
{
	if (dp[s][v] >= 0) return dp[s][v];
	if (s == (1 << n) - 1 && v == 0) return dp[s][v] = 0;

	int res = inf;
	for (int u = 0; u < n; u++ )
	{
		if (!(s >> u & 1))
		{
			res  = min(res, dfs(s | 1 << u, u) + dist[v][u]);
		}
	}
	dp[s][v] = res;
	cout << "dp[" <<  s << "][" << v << "] = " << dp[s][v] << endl;
	bi_pri(s);
	return res;
}


int		main()
{
	cin >> n >> m;
	
	memset(dp, -1, sizeof(dp));
	
	fill(dist[0], dist[0] + 15 * 15, inf);
	for (int i = 0; i < m; i++)
	{
		int a, b, c; cin >> a >> b >> c;
		dist[a][b] = c;
	}
	int ans = dfs(0, 0);
	cout << (ans == inf ? -1 : ans) << endl;
	
}


