#include <bits/stdc++.h>
using namespace std;

int		main()
{
	int N; cin >> N;
	vector<int> V(N);
	for (int i = 0; i < N; i++) cin >> V[i];
	
	bool f = true;
	int ans = 0;
	while (f)
	{
		for (int i = 0; i < N; i++)
		{
			if (V[i] % 2 != 0)
			{
				f = false;
				break;
			}
			V[i] /= 2;
		}
		if (f) ans++;
	}
	cout << ans << endl;
}

