#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int		main()
{

	int N; cin >> N;
	vector<ll> a(N + 1, 0);
	vector<vector<ll>> dp(N + 1, vector<ll>(N + 1, 0));

	for (int i = 0; i < N; i++)
	{
		int tmp; cin >> tmp;
		a[i + 1] = tmp + a[i];
	}
	
	for (int w = 2; w <= N; w++)
	{
		for (int l = 0; l < N - w + 1; l++)
		{
			int r = l + w;
			ll tmp = 1LL<<60;
			//long long tmp=9999999999999999LL;

			for (int k = l + 1; k < r; k++)
			{
				tmp = min(tmp, dp[l][k] + dp[k][r]);
				// dp[l][r] = min(dp[l][r], dp[l][k] + dp[k][r]) + a[r] - a[l];	

			}
			dp[l][r] = tmp + a[r] - a[l];	

			cout << "l=" << l << " r=" << r << " " << dp[l][r] << endl;
		}
	}
	cout << dp[0][N] << endl;
}

/*
#include <bits/stdc++.h>
using namespace std;

long long dp[444][444];
vector<long long> sum(1);

int main(){
	int N;
	cin >> N;
	vector<long long> a(N);
	for(auto &i:a)cin >> i;
		
	for(int i=0;i<N;i++)sum.push_back(sum[i]+a[i]);
	
	for(int w=2;w<=N;w++){
		for(int l=0;l<=N-w;l++){
			int r=l+w;
			long long tmp=9999999999999999LL;
			for(int x=l+1;x<r;x++)tmp=min(tmp,dp[l][x]+dp[x][r]);
			dp[l][r]=tmp+sum[r]-sum[l];
		}
	}
	cout << dp[0][N] << endl;
	return 0;
}


*/

