#include <bits/stdc++.h>
using namespace std;
int main(){
	long double n,m,k;
	cin>>n>>m>>k;
	if(n+m+2.0*sqrt(n*m)<k) cout<<"Yes";
	else cout<<"No";
	cout << 2.0 * sqrt(n*m) << endl;
	return 0;
}

