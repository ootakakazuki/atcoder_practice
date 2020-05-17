#include <bits/stdc++.h>
using namespace std;
# define mod 1000000007
typedef long long ll;

struct hogehh{int a, b, c, d;};

bool	cmp(const hogehh &e1, const hogehh &e2){
	return e1.d > e2.d;		
}

int		main()
{
	//hogehh hoge[10000000];
	vector<int> A;
	vector<int> B;
	vector<int> C;
	vector<int> D;
	int n, m, q; cin >> n>>m>>q;
	vector<hogehh> hoge(q);
	int ans = 0;
	for (int i = 0; i < q; i++)
	{
		int a, b, c, d; cin >> a >> b >> c >> d; a--, b--;
		/*
		A.push_back(a);
		B.push_back(b);
		C.push_back(c);
		D.push_back(d);
		*/
		hoge[i].a = a;
		hoge[i].b = b;
		hoge[i].c = c;
		hoge[i].d = d;
	}
	sort(hoge.begin(), hoge.end(), cmp);
	for (int i = 0; i < q; i++)cout << hoge[i].d << endl;
	for (int bit = 0; bit < 1<<n; bit++)
	{
		for (int i = 0; i < q; i++)
		{
			if (bit & (1 << i) != 1) continue;
			
		}
		
	}
}

