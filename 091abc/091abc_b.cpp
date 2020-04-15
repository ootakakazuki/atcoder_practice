#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	map<string,int>mp;
	for(int i=0;i<n;i++){
		cin>>s;
		mp[s]++;
	}

	int m;
	cin>>m;
	while(m--)
	{
		cin >> s;
		mp[s]--;
	}
	int ans=0;
	vector<string> vs;
	for(auto x: mp)
	{
		ans = max(ans, x.second);
	}
	cout<<ans<<endl;
	string s = "hoge";
	mp[s] = 100;
	cout << mp[vs[i]] << endl;
}

