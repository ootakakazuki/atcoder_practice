#include <bits/stdc++.h>
using namespace std;

int		main()
{
	int n; cin >> n;
    vector<vector<int>> dp(n+1, vector<int>(n+1, -n));
	vector<int> w(n);
	for (int i = 0; i < n; i++) cin >> w[i];

	 for (int i = 0; i <= n; ++i) {
        dp[i][i] = 0;
        if (i < n) dp[i][i+1] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}

	for(int W = 2;W <= n;W++)
	{
    	//left
    	for(int l = 0;l < n;l++)
    	{
        	int r = l + W;
			
			if(r > n) {
				continue;
			}
        	cout << l << " " << r << " " << W <<endl;
		    if(dp[l + 1][r - 1] == W - 2 && abs(w[l] - w[r - 1]) <= 1){
        		dp[l][r] = W;
				cout << "dainyu" << endl;
			}
			
	        for(int mid = l;mid <= r;mid++)
    	    {
        	    dp[l][r] = max(dp[l][r] , dp[l][mid] + dp[mid][r]);
        	}
		cout << "dp[" << l << "][" << r << "] = " << dp[l][r] << endl;
		cout << "--------------------------------" << endl;
    	}
	}
	cout << dp[0][n] << endl;
}
