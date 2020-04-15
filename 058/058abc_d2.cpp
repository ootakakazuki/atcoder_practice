#include<bits/stdc++.h>
#define MOD 1000000007
#define rep(i,n)for(int i=0;i<(n);i++)
using namespace std;
typedef long long ll;

int main() {
	int n, m; scanf("%d%d", &n, &m);
	ll a = 0, b = 0;
	rep(i, n) {
		ll x; scanf("%lld", &x);
		(a += x*(i - (n - i - 1))) %= MOD;
		printf("%lld\n", a);
	}
	rep(i, m) {
		ll y; scanf("%lld", &y);
		(b += y*(i - (m - i - 1))) %= MOD;
		printf("%lld\n",b);
	}
	printf("%lld\n", (a * b) % MOD);
}

