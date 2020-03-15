#include <bits/stdc++.h>
using namespace std;


int		main()
{
	int		N;
	
	cin>>N;
	vector<int > hoge(N);
	for (int i = 0; i < N; i++) cin>>hoge[i];
	auto alt = hoge;
	sort(hoge.begin(), hoge.end());
	auto it = unique(hoge.begin(), hoge.end());
	hoge.erase(it, hoge.end());

	vector<int > ans(N);
	int tmp;
	for (int i = 0; i < N; i++)
	{
		tmp = lower_bound(hoge.begin(), hoge.end(), alt[i]) - hoge.begin();
		ans[i] = tmp;
	}

	for (int i = 0; i < N; i++)
		cout<<ans[i]<<endl;
}
