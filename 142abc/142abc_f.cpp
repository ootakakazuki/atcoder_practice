#include <bits/stdc++.h>
using namespace std;

using graph = vector<vector<int>>;

int		main()
{
	int N, M; cin >> N >> M;
	graph G(N);
	for (int i = 0; i < M; i++)
	{
		int a, b; cin >> a >> b; a--, b--;
		G[a].push_back(b);
	}

	int shortest = N + 1;
	vector<int> res;

	for (int s = 0; s < N; s++)
	{
		vector<int> dist(N, -1);
		vector<int> prev(N, -1);
		queue<int> q;
		q.push(s); dist[s] = 0;
		while (!q.empty())
		{
			auto v = q.front(); q.pop();
			for (auto nv: G[v])
			{
				if (dist[nv] == -1)
				{
					dist[nv] = dist[v] + 1;
					prev[nv] = v;
					q.push(nv);
				}
			}
		}
		for (int i = 0; i < N; i++)
		{
			cout<<"prev"<<prev[i]<<endl;
		}

		for (int t = 0; t  < N; t++)
		{
			if (t == s || dist[t] == -1) continue;
			for (auto nt : G[t])
			{
				if (nt == s)
				{
					cout<<"t="<<t<<endl;
					cout<<"nt="<<nt<<endl;
					cout<<"s="<<s<<endl;
					vector<int> tmp({s});
					int cur = t;
					while (cur != s) tmp.push_back(cur),cur = prev[cur];
					if (shortest > tmp.size())
					{
						shortest = tmp.size();
						res = tmp;
					}
				}
			}
		}
	}
	if (shortest == N + 1) cout<< -1 <<endl;
	else
	{
		cout<<res.size()<<endl;
		for (auto v : res) cout << v + 1 << endl;
	}
}
