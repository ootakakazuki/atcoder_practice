#include <bits/stdc++.h>
using namespace std;

int	main()
{
	int		n;
	string 	s;
	unordered_map<string, int> mp;
	cin>>n;
	int max_c = 0;
	
	for (int i = 0; i < n; i++)
	{
		cin>>s;
		mp[s]++;
		max_c = max(max_c, mp[s]);
	}

	for (auto p : mp)
	{
		if (p.second == max_c)
		{
			cout<<p.first<<endl;
		}
	}
}



