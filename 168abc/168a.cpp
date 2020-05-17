#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
# define mod 1000000007
# define vi vector<ll>
# define vvi vector<vi>
# define rep(i, N) for (int i = 0; i < N; i++)
# define Rep(i, N) for (int i = 1; i <= N; i++)
# define deb(x) cerr << #x << ": " << x << endl;
# define deb2(x, i) cerr << #x << "[" << i << "]: " << x[i] << endl;
/*
vi v(10, 2); 
rep(i, 10) deb2(v, i); 
*/

/*
int a; cin >> a;
int a, b; cin >> a >> b;
rep(i, n){cin >> v[i];}
cout <<   << endl;
*/

signed		main()
{
	//n % 10 == 
	int n; cin >> n;
	if (n % 10 == 2 or n % 10 == 4 or n % 10 == 5 or n % 10 == 7 or n % 10 == 9)
	{
		cout << "hon" << endl;
	}	
	else if (n % 10 == 0 or n % 10 == 1 or n % 10 == 6 or n % 10 == 8)
	{
		cout << "pon" << endl;
		
	}
	else
	{
		cout << "bon" << endl;
		
	}
}

