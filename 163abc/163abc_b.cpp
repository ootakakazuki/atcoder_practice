#include <bits/stdc++.h>
using namespace std;
# define mod 1000000007
typedef long long ll;

int		main()
{
	int N, M; cin >> N >> M;
	int hoge = 0;
	int ans = 0;
	for (int i = 0; i < M; i++) 
	{
		int a; cin >> a;
		hoge += a;
	}
	cout << (N < hoge ? -1 : N - hoge) << endl;
}

