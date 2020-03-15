#include <bits/stdc++.h>
using namespace std;


int		my_pow(int n)
{
	if (n < 1) return 1;
	int a = 1;
	while (n--)
	{
		a *= 10;
	}
	return a;
}

int		main()
{
	int N, M; cin>>N>>M;
	int s, c;
	int hoge = 0;
	unordered_map<int, int> mp;
	//int hairetu[10] = {0};
	int flag = 0;
	while (M--)	
	{
		cin>>s>>c;
		if (N < s)
		{
			continue;
		}
		if (mp.count(s))
		{
			if (mp[s] != c)
			{
				flag = 1;
				break;
			}
		}
		else
		{
			mp[s] = c;
			hoge += my_pow(N - s) * c;
		}
	}
	if (flag)
	{
		cout<<-1<<endl;
		return 0;
	}

	if (!mp.count(1))
	{
		hoge += my_pow(N - 1);
	}
	int hoge2 = hoge;
	int l = 1;
	while (hoge2 > 9)
	{
		l++;
		hoge2 /= 10;
	}
	cout << (N == l ? hoge : -1) << endl;	
}

