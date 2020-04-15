#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

const ll maxn = 2 * (int)1e5 + 100;
const ll INF = (ll)1e18;
ll n, k, dp[maxn], pre[maxn]; 
string s;

inline ll mymax(ll a, ll b) {
	if (a > b) return a;
	else return b;
}
inline ll mymin(ll a, ll b) {
	if (a < b) return a;
	else return b;
}


int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> n >> k;
	cin >> s;
	if (k >= n) {
		cout << 1 << '\n';
		return 0;
	}
	ll cur = -4 * n;
	for (int i = 0; i < n; ++i) {
		pre[i] = cur;
	}
	for (int i = n-1; i >= -k; --i) {
		if (i >= 0  && s[i] == '1') {
			cur = i;
		}
		if (i + k < n) {
			pre[i + k] = cur;
		}
	}
	for (int i = 0; i < n; ++i) {
		dp[i] = INF;
		cout << pre[i];
	}
	cout << endl;
	dp[n] = 0;
	for (int i = n; i > 0; --i) {
		if ((i-1) - pre[i-1] <= k) {
			int idx = mymax(0, pre[i-1] - k);
			dp[idx] = mymin(dp[idx], pre[i-1] + 1 + dp[i]);
		}
		dp[i-1] = mymin(dp[i-1], dp[i] + i);
	}
	for (int i = 0; i < n; ++i) {
		cout << dp[i] << endl;
	}
	cout << endl;
	cout << dp[0] << '\n';
	return 0;
} 

