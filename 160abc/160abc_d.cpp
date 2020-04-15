#include <bits/stdc++.h>
using namespace std;

using graph = vector<vector<int>>;
graph G;

int		main()
{
	int N, X, Y; cin >> N >> X >> Y;
	G.assign(N, vector<int>());
	for (int i = 1; i < N; i++)
	{
		G[i].push_back(i + 1);
		G[i + 1].push_back(i);
	}
	G[X].push_back(Y);
	G[Y].push_back(X);
	int dis = 0;
	for (int i = 1; i <= N; i++)
	{
		dis++;
		dfs(i, )
	}
}

