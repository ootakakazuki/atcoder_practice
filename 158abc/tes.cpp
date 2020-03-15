#include<bits/stdc++.h>
using namespace std;
int main(){
  string S;cin>>S;
  string A="",B="";
  long d=1;
  long Q;cin>>Q;
  for(long q=0;q<Q;q++){
    long T;cin>>T;
    if(T==1)d*=-1;
    else{
      long F;char C;cin>>F>>C;
      if((F==1&&d==1)||(F==2&&d==-1))A+=C;
      else B+=C;
    }
  }
  reverse(A.begin(),A.end());
  string ans=A+S+B;
  if(d==-1)reverse(ans.begin(),ans.end());
  cout<<ans;
  
}

/*






*/

