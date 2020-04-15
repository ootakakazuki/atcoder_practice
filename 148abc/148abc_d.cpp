#include <bits/stdc++.h>
using namespace std;

int		main()
{
	int N; cin >> N;
	int hoge = 1;
	int ans = 0;
	for (int i = 0; i < N; i++)
	{
		int a; cin >> a;
		if (a == hoge)
		{
			ans++;
			hoge++;
		}
	}
	if (hoge == 1)
	{	
		cout << -1 << endl;
		return 0;
	}
	cout << N - ans << endl;
}

