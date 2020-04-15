#include <bits/stdc++.h>
using namespace std;


int		main()
{
	int N; cin >> N;
	char pre = ' ';
	int res = 0;
	while (N--)
	{
		char a; cin >> a;
		if (pre != a)
		{
			res++;
		}
		pre = a;
	}
	cout << res << endl;
}

