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

int h, w, k, x[505][505];
int a[250005],b[250005],c[250005],d[250005];
int main() {
	int i, j;
	scanf("%d%d", &h, &w);
	for(i=1; i<=h; i++) for(j=1; j<=w; j++) scanf("%d", &x[i][j]);
	for(i=1; i<=h; i++) for(j=1; j<=w; j++) if(x[i][j]%2) {
		if(j!=w) x[i][j+1]++, a[k]=i, b[k]=j, c[k]=i, d[k]=j+1, k++;
		else if(i!=h) x[i+1][j]++, a[k]=i, b[k]=j, c[k]=i+1, d[k]=j, k++;
	}
	printf("%d\n", k);
	for(i=0; i<k; i++) printf("%d %d %d %d\n", a[i], b[i], c[i], d[i]);
	return 0;
}

