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
	
	int n, a, b, c; cin >> n>>a>>b>>c;
	vi v(100, 0);
	v["A"] = a;
	v["B"] = b;
	v["C"] = c;

	rep(i, n)
	{
		string s; cin >> s;
		if (v[s[0]] == 0 && v[s[1]] == 0)
		{
			cout << "No" << endl;
			return 0;
		}
		if ()
	}		
}

