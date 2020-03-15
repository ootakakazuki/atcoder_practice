#include <bits/stdc++.h>
using namespace std;

vector<int> tree[1000000];




void	dfs(int i, int n)
{
		
}


int		main()
{
	int N; cin >> N;
	for (int i = 0; i < N - 1; i++)
	{
		int a, b;
		cin >> a >> b;
		a--, b--;
		tree[a].push_back(b);
		tree[b].push_back(a);
	}
	for (int i = 0; i < N; i++)
	{
		dfs(i, 0);
	}
}
