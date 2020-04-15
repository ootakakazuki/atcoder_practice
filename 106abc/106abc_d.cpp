#include <cstdio>
#include <bits/stdc++.h>
using namespace std;
int n, m, q, l, r, d[505][505];
int main() {
	int i, j;
	scanf("%d%d%d", &n, &m, &q);
	while(m--) scanf("%d%d", &l, &r), d[l][r]++;
	for(i=1; i<=n; i++) for(j=1; j<=n; j++) d[i][j] += d[i-1][j] + d[i][j-1] - d[i-1][j-1];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << d[i][j];		
		}
		cout << endl;
	}
	while(q--) {
		scanf("%d%d", &l, &r);
		printf("%d\n", d[r][r] - d[l-1][r] - d[r][l-1] + d[l-1][l-1]);
	}
	return 0;
}

