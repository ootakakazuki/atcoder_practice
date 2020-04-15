#include<bits/stdc++.h>
using namespace std;

int N,s[10][10];
int ans=-1*1e9;
vector<int> g[3];
void dfs(int cu=0,int p=0){
    if(cu==N){
        ans=max(ans,p);
        return;
    }
    for(int i=0;i<3;i++){
        int res=0;
        for(auto j:g[i]){
			cout << j << endl;
			cout << "cu = " << cu << endl;

            res+=s[j][cu];
        }
		cout << "hoge" << endl;
        g[i].push_back(cu);
        dfs(cu+1,p+res);
        g[i].pop_back();
    }
}

int main(){
    cin >> N;
    s[N][N]={};
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            int a; cin >> a;
            s[i][j]=a;
            s[j][i]=a;
        }
    }
    dfs();
    cout << ans << endl;
}

