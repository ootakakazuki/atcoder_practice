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


#define pi pair<int,int>
#define ff first
#define ss second
const int N = 1e5 + 5;


int32_t main() { 
	int n;
	cin>>n;
	string s;
	vector<pi>v;
	int cnt = 0,c = 0;
	for(int i=0;i<n;i++){
		cin>>s;
		int open = 0,close = 0;
		for(char &c:s){
			if(c == '(')
				open++;
			else{
				if(open>0)
					open--;
				else
					close++;
			}
		}
		if(open>0 && close>0)
			v.push_back({open,close});
		else if(open>0)
			cnt+=open;
		else
			c+=close;
	}

	sort(v.begin(),v.end(),[&](pi a,pi b){
		return (a.ff-a.ss > b.ff-b.ss);
	});

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].ff << " " << v[i].ss << endl;
	}

	for(pi &p : v){
		cnt-=p.ss;
		if(cnt<0)
			break;
		cnt+=p.ff;
	}
	cnt -=c;
	if(cnt == 0)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}	






