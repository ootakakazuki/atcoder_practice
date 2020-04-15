#include <bits/stdc++.h>
using namespace std;
vector<int> hoge = {1, 0, 0};

int		main()
{
	int res = 0;
	for (int i = 0; i < 32; i++)
	{
		int count = 0;
		for (auto a: hoge)
		{
			count += (a >> i) & 1;
		}
		res += count * (hoge.size() - count);
	}
	cout << res << endl;
}
