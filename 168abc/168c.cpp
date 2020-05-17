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
	double p = 3.14159265359;
	double a, b, h, m;
	cin >> a >> b >> h >> m;
	double x = h * 30 + 30 * m / 60;
	double y = m * 6;
	double ang = x - y;

	//cout << x << " " << y << " " << ang << endl;
	//cout << cos(ang * p / 180) << endl; 
	
	double ans = sqrt(a * a + b * b + (-2) * a * b * cos(ang * p / 180));
	//cout << setprecision(12) << ans << endl;
	printf("%10.10f\n", ans);
}

