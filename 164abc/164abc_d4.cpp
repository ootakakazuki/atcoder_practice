#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin >> s;
    reverse(s.begin(),s.end());
    long long lol[2019] = {0},p=1,ans=0,t=0;
    lol[0]=1;
    for(char c:s){
        t = (t + (c-'0')*p)%2019;
		cout << t << endl;
        ans+=lol[t];
		cout << "ans=" << ans << endl;
		cout << endl;
        p = (p*10)%2019;
        lol[t]++;
    }
    cout << ans;
}

