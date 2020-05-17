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
	
	int n, k; cin >> n>>k;
	vi v(n+1, 0);
	rep(i, k)
	{
		int d; cin >> d;
		rep(j, d)
		{
			int a; cin >> a;
			v[a]++;
		}
	}
	int ans = 0;
	Rep(i, n)
	{
		if (v[i] == 0)ans++;
	}
	cout << ans << endl;
}

