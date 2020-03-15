#include <bits/stdc++.h>
using namespace std;
#define INF 1e9


int		main()
{
	int A, B, M;
	cin >> A >> B >> M;
	vector<int> AV(A);
	vector<int> BV(B);
	int min_a = INF;
	int min_b = INF;
	
	for (int i = 0; i < A; i++)
	{
		cin >> AV[i];
		min_a = min(min_a, AV[i]);
	}
	for (int i = 0; i < B; i++)
	{
		cin >> BV[i];
		min_b = min(min_b, BV[i]);
	}
	int ans = min_a + min_b;
	for (int i = 0; i < M; i++)
	{
		int x, y, c;
		cin >> x >> y >> c;
		x--, y--;
		ans = min(ans, AV[x] + BV[y] - c);
	}
	cout << ans << endl;
}
