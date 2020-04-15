#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define int long long
typedef pair<int,int>P;
#define fi first
#define se second
#define INF 1e12
int n,m,t;
char c[11][11];
int a[11][11];
int d[11][11];
int dx[]={1,0,-1,0};
int dy[]={0,-1,0,1};
signed main(){
	cin>>n>>m>>t;
	rep(i,n)rep(j,m)cin>>c[i][j];
	int l=1,r=INF;
	while(r-l>1){
		int md=(l+r)/2;
		int X,Y;
		queue<P>q;
		rep(i,n)rep(j,m)d[i][j]=INF;
		rep(i,n){
			rep(j,m){
				if(c[i][j]=='.')a[i][j]=1;
				else if(c[i][j]=='#')a[i][j]=md;
				else if(c[i][j]=='S'){
					q.push({i,j});
					d[i][j]=0;
				}
				else{
					a[i][j]=1;
					X=i,Y=j;
				}
			}
		}
		while(!q.empty()){
			P p=q.front();
			q.pop();
			rep(i,4){
				int x=p.fi+dx[i],y=p.se+dy[i];
				if(x<0||x>=n||y<0||y>=m)continue;
				if(d[x][y]>d[p.fi][p.se]+a[x][y]){
					d[x][y]=d[p.fi][p.se]+a[x][y];
					q.push({x,y});
				}
			}
		}
		cout << d[X][Y] << " " << t<<endl;
		if(d[X][Y]>t)r=md;
		else l=md;
	}
	cout<<l<<endl;
	return 0;
}

