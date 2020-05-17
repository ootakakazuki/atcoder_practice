#include <bits/stdc++.h>
using namespace std;
# define mod 1000000007
typedef long long ll;
int hoge[200005];

int		main()
{
	int N; cin >> N;
	for (int i = 0; i < N - 1; i++)
	{
		int a; cin >> a;
		hoge[a]++;
	}
	for (int i = 1; i <= N; i++)cout << hoge[i] << endl;
}

