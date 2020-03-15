#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e11;

int		main()
{
	int	N, M, L;
	cin>>N>>M>>L;
	vector<vector<ll>> graph(N, vector<ll>(N, INF));

	vector<int> B(M);

	int		a, b, c;
	for (int i = 0; i < M; i++)
	{
		cin>>a>>b>>c;
		a--;
		b--;
		if (c > L)continue;
		graph[a][b] = c;
		graph[b][a] = c;
	}
	for (int k = 0; k < N; k++){
		for (int i = 0; i < N; i++){
			for (int j = 0; j < N; j++){
				if (graph[i][j] > graph[i][k] + graph[k][j])
					graph[i][j] = graph[i][k] + graph[k][j];
			}
		}
	}
	
	vector<vector<ll>> ans(N, vector<ll>(N, INF));

	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			if (graph[i][j] <= L) ans[i][j] = 1;
		}
	}
	for (int k = 0; k < N; k++){
		for (int i = 0; i < N; i++){
			for (int j = 0; j < N; j++){
				if (ans[i][j] > ans[i][k] + ans[k][j])
					ans[i][j] = ans[i][k] + ans[k][j];			
			}
		}
	}


	int	Q, s, t;
	cin>>Q;
	while (Q--)
	{
		cin>>s>>t;
		s--;
		t--;
		if (ans[s][t] >= INF) cout<<-1<<endl;
		else cout<<(min(ans[s][t], ans[t][s]) - 1)<<endl;
	}

}
