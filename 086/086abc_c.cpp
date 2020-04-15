#include <bits/stdc++.h>
using namespace std;

int		main()
{
	int N; cin >> N;
	bool f = true;
	for (int i = 0; i < N; i++)
	{
		int t, x, y; cin >> t >> x >> y;
		if (t < x + y || (x + y) % 2 != t % 2)
		{
			f = false;
		}
	}
	cout << (f ? "Yes" : "No") << endl;
}

