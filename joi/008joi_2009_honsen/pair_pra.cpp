#include <bits/stdc++.h>
using namespace std;
pair<int,int> hoge[10];

bool	cmp(const pair<int, int> &a1, const pair<int, int> &a2)
{
	return a1.second < a2.second;
}

int		main()
{
	hoge[0].first = 1;hoge[0].second = 3;
	hoge[1].first = 1;hoge[1].second = 30;
	hoge[2].first = 1;hoge[2].second = 2;
	hoge[3].first = 2;hoge[3].second = 3;
	hoge[4].first = 2;hoge[4].second = 30;
	hoge[5].first = 2;hoge[5].second = 2;
	sort(hoge, hoge+6, cmp);
	for (int i = 0; i < 6; i++) cout << hoge[i].first << " " << hoge[i].second << endl;
}
