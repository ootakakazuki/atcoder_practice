#include <bits/stdc++.h>
using namespace std;
# define fills(x,y) memset(x,y,sizeof x)
# define ALL(v) (v).begin(), (v).end()
# define SZ(x) ((int)(x).size)
# define pb push_back
# define INF (int)1e9
# define EPS 1e-9
# define rep(i,n) for(int i=0;i<n;++i)
# define REP(i,k,n) for(int i=k;i<=n;++i)
# define mod 1000000007

typedef long long ll;
typedef pair<ll, ll> Pll;
typedef vector<ll> Vl;
typedef vector<Vl> VVl;
typedef vector<string> VS;
typedef vector<Pll> Vll;
typedef map<ll,ll> Mll;
typedef set<ll> SETl;


int		main()
{
	int N;
	string s;
	ll res = 0;
	int k = 0;
	cin >> N >> s;
	
	vector<ll> vr(N, 0);
	vector<ll> vg(N, 0);
	vector<ll> vb(N, 0);
	for (int i = 0; i < N; i++)
	{
		if (s[i] == 'R') vr[i]++;
		else if (s[i] == 'G') vg[i]++;
		else 
		{
			vb[i]++;
		}
		if (i > 0)
		{
			vr[i] += vr[i-1];
			vg[i] += vg[i-1];
			vb[i] += vb[i-1];
		}
	}
	/*	
	for (int i = 0; i < N; i++)
	{
		cout << vr[i] << endl;
	}
	*/
	int hoge = 'R' +'G' + 'B';
	for (int i = 0; i < N - 2; i++){
		for (int j = i + 1; j < N - 1; j++)
		{
			if (s[i] == s[j]) continue;
			int tmp = hoge - s[i] - s[j];
			if (tmp == 'R')
			{
				res += vr[N-1] - vr[j];
				if (s[j + (j - i)] == 'R') res--;
			}
			else if (tmp == 'G')
			{
				res += vg[N-1] - vg[j];
				if (s[j + (j - i)] == 'G') res--;
			}
			else
			{
				res += vb[N-1] - vb[j];
				if (s[j + (j - i)] == 'B') res--;
			
			}
		}
	}
	
	cout << res << endl;

}

