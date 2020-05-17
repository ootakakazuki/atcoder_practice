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



signed		main()
{
	int n, m; cin >> n >> m;
	vi v(n + 1);
	Rep(i, n) cin >> v[i];
	vvi v2(n + 1);
	rep(i, m)
	{
		int a, b; cin >> a >> b;
		v2[a].push_back(b);
		v2[b].push_back(a);
	}
	int ans = 0;
	for (int i = 1; i < v2.size(); i++)
	{
		bool f = 1;
		for (int j = 0; j < v2[i].size(); j++)
		{
			if (v[i] <= v[v2[i][j]])
			{
				f = 0;
				break;
			}
		}
		if (f) ans++;
	}
	cout << ans << endl;
}

