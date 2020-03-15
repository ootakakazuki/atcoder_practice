#include<bits/stdc++.h>
using namespace std;
const int mo=1e9+7,N=2e5+5;
typedef long long LL;
void Inverse(int p,int a[],int n){//ÏßÐÔÇó<=nµÄÊý%pÒâÒåÏÂµÄÄæÔª 
	a[1]=1;
	for(int i=2;i<=n;i++){
		a[i]=1ll*(p-p/i)*a[p%i]%p;
	}
}
int inv[N];
int main(){
	int n,k;scanf("%d%d",&n,&k),k=min(k,n-1);
	Inverse(mo,inv,n-1);
	LL ans=(k!=1),a=1,b=1;
	for(int i=1;i<=k;i++){
		a=a*inv[i]%mo*(n-i+1)%mo,b=b*inv[i]%mo*(n-i)%mo;
		(ans+=a*b)%=mo;
	}
	printf("%d\n",ans);
	printf("inv[2]=%lld\n", inv[2]);
	printf("inv[3]=%lld\n", inv[3]);
	printf("inv[4]=%lld\n", inv[4]);

	return 0;
}

