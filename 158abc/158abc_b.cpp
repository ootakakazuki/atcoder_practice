#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int		main()
{
	ll N, A, B; cin>>N>>A>>B;
	if (A == 0)
	{
		cout << 0 << endl;
		return 0;
	}
	ll ans = A * (N / (A + B));
	ll hoge = A >= (N % (A + B)) ? (N % (A + B)) : A;
	cout << (ans + hoge) << endl;		
}
