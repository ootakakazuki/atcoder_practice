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
	int n, m, x; cin >> n >> m >> x;
	vector<int> c(n);
	vector<vector<int>> a(n, vector<int>(m));
	for (int i = 0; i < n; i++)
	{
		cin >> c[i];
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
		
	}
	int res = 1000000000;
	for (int bit = 0; bit < (1 << n); bit++)
	{
		//cout << "bit=" << bit << endl;
		int tmp = 0;
		int power = 0;
		vector<int> v(m, 0);
		for (int i = 0; i < n; i++)
		{
			if (bit & (1 << i))
			{
				tmp += c[i];
				for (int j = 0; j < m; j++)
				{
					v[j] += a[i][j];
				}
			}
			//cout << "v[" << i << "]=" << v[i] << endl;
		}

		int f = 0;
		for (int i = 0; i < m; i++)
		{
			if (v[i] < x)
			{
				f = 1;
				break;
			}
		}
		
		if (f == 0)
		{
			res = min(res, tmp);
		}
	}
	cout << (res == 1000000000 ? -1 : res) << endl;
}

