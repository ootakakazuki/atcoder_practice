#include <bits/stdc++.h>
using namespace std;

int		main()
{
	int N; cin >> N;
	vector<int> v(1000005, 0);
	for (int i = 0; i < N; i++)
	{
		int a, b; cin >> a >> b;
		while (a <= b)
		{
			v[a]++;
			a++;
		}
	}
	//for (int i = 0; i < 10; i++)cout << v[i] << endl;
	int ans = 0;
	for (int i = 0; i <= 1000000; i++)
	{
		ans = max(ans, v[i]);
	}
	cout << ans << endl;
}
