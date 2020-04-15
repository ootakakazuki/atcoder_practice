#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int INF = 2e9;
const int MAX = 2e5;
const int divisor = 998244353;
int n;
pair<int, int> a[MAX + 1];
int dp[MAX + 1];

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i].first >> a[i].second;
    }

    sort(a, a + n);

    dp[n] = 1;
    vector<pair<int, int>> L(1, {1e9, n});
    for (int k = n - 1; k >= 0; --k) {
        while (L.back().first < a[k].first + a[k].second) L.pop_back();
		cout << "dp[" << k << "]=" << dp[k] << endl;
        dp[k] = (dp[k + 1] + dp[L.back().second]) % divisor;
		cout << "dp[" << k << "]=" << dp[k] << endl;
        L.emplace_back(a[k].first, k);
    }

    cout << dp[0];
    return 0;
}

