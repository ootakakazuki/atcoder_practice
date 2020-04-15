#include <bits/stdc++.h>
#define REP(i,x) for(int i=0;i<(int)(x);i++)
#define REPS(i,x) for(int i=1;i<=(int)(x);i++)i
typedef long long ll; 

using namespace std;
/*
int		main()
{
	vector<ll> v(N);
	ll N, A, B; cin >> N >> A >> B;
	REP(i, N) cin >> v[i];

	sort(v, v + N);
	
	
	/ 4 5
	/ 3 10 10 10 10 20 30  
	

}
*/

#include<bits/stdc++.h>
using namespace std;
long nCk(int n,int k){
	long r=1;
	for(int i=1;i<=k;++i){
		r*=n+1-i;
		r/=i;
	}
	return r;
}
long N,A,B,l,r,v[50],c;
double s;
int main(){
	cin>>N>>A>>B;
	for(int i=0;i<N;++i)cin>>v[i];
	sort(v,v+N);
	reverse(v,v+N);
	for(int i=0;i<A;++i)s+=v[i];
	l=r=A-1;
	while(l-1>=0&&v[l-1]==v[A-1])--l;
	while(r+1<N&&v[r+1]==v[A-1])++r;
	for(int i=A;i<=(l?A:B);++i){
		cout << "l = " << l << endl;
		cout << "r = " << r << endl;
		cout << "i = " << i << endl;
		c+=nCk(r-l+1,i-l);
		cout << r - l + 1 << " " << i - l << endl;
	}
	printf("%.15f\n%ld\n",s/A,c);
}


