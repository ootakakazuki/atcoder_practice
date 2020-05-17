#include <bits/stdc++.h>
using namespace std;
# define mod 1000000007
typedef long long ll;

int		main()
{
	int N; cin >> N;
	int res = 0;
	unordered_map<string, int> m;
	for (int i = 0; i < N; i++)
	{
		string s; cin >> s;
		if (m[s] == 0)
		{
			res++;
		}
		m[s]++;
	}
	cout << res << endl;
}

