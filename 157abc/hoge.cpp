#include<bits/stdc++.h>
using namespace std;
int a[10];
int main() {
	int n,m,i,x,y,pd=0;
	cin>>n>>m;
	for (i=1; i<=m; i++) {
		cin>>x>>y;
		if(a[x]&&a[x]!=y || x==1&&y==0&&n!=1) {
			pd=1;
			cout<<"-1";
			break;
		}
		a[x]=y;
	}
	if (pd==0) {
		if (a[1]==0&&n!=1)
		    a[1]=1;
		for (i=1; i<=n; i++) {
			cout<<a[i];
		}
	}
    cout << endl;
    return 0;
}

