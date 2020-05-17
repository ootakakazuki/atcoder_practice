#include <bits/stdc++.h>
using namespace std;
# define mod 1000000007
typedef long long ll;

vector<int> G[200005];

int		main()
{
	int N; cin >> N;
	vector<int> c(N, 0);
	for (int i = 0; i < N; i++)
	{
		int a; cin >> a; a--;
		c[i] = a; 
	}
	for (int i = 0; i < N - 1; i++)
	{
		int x, y; cin >> x >> y; x--; y--;
		G[x].push_back(y);
		G[y].push_back(x);
	}
	for (int i = 0; i < N; i++)
	{
		
	}
}

