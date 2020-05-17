#include<iostream>
using namespace std;
string s;
long cnt[2019];

int main()
{
	cin>>s;
	int now=0;
	long ans=0,p=1,pi=1;
	cnt[0]=1;
	for(int i=s.size();i--;)
	{
		now=(now+(s[i]-'0')*p)%2019;
		ans+=cnt[now]++;
		p=p*10%2019;
		cout << p << endl;
	}
	cout<<ans<<endl;
}

