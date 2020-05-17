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
	int n; cin >> n;
	vector<int> v1(n);	
	vector<int> v2(n);
	unordered_map<int, int> mp;
	int ans= 0;

	for (int i = 0; i < n; i++)
	{
		cin >> v1[i] >> v2[i];
		mp[v1[i]]++;
		mp[v2[i]]++;
		ans = i + 1;
			
	}
	
}

