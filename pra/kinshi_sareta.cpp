#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

ll solve(ll x) {
  string S = to_string(x);
  int N = S.size();
  ll dp[100][2][2] = {};
  dp[0][0][0] = 1;
  rep(i, N) rep(j, 2) rep(k, 2) {
    int x = j ? 9 : S[i] - '0';
    rep(d, x + 1) {
      dp[i + 1][j || d < x][k || d == 4 || d == 9] += dp[i][j][k];
	  cout<<"-------------------------------------"<<endl;
	  cout << "S["<<i<<"]="<<S[i] << endl;
	  cout << "d="<<d<< endl;

	  cout << "dp[" << i+1 << "][" << (j||d<x) << "][" << (k||d==4||d==9) << "]=" << dp[i+1][j||d<x][k||d==4||d==9] << endl;
	  cout << "dp[" << i << "][" << j << "][" << k << "]=" << dp[i][j][k] << endl;
    }
	cout << endl;
  }
  return dp[N][0][1] + dp[N][1][1];
}

int main() {
  ll A, B;
  cin >> A >> B;
  cout << solve(B) - solve(A - 1) << endl;
  return 0;
}

