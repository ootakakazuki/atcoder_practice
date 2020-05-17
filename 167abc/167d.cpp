#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
	int n, k; cin >> n >> k;
	vector<int> v(n);
	vector<int> v2;
	vector<int> v3(n);
	unordered_map<int, int> mp;
	for (int i = 0; i < n; i++) cin >> v[i];
	
	int hoge = 0;
	for (int i = 0; i < n; i++)
	{
		if (mp.count(v[i]))
		{
			hoge = v[i];
			mp[v[i]]++;
			break;
		}
		mp[v[i]]++;
		v3[i] = i;
		v2.push_back(v[i]);
	}
	vector<int> v4;
	int mod = (int)v2.size() - v3[hoge];
	cout << "v2.size" << v2.size() << endl;
	cout << "v3[hoge]" << v3[hoge] << endl;
	cout << "mod" << mod << endl;
	if (k < v3[hoge])
	{
		cout << v2[k] << endl;
		return 0;
	}
	for (int i = 0; i < mod; i++) v4.push_back(i + v3[hoge]);
	cout << v4[k % mod] << endl;
}

