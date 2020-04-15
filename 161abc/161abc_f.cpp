#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int64_t N;
  int64_t M;
  int sum=0;
  cin >> N;
  for(int64_t i=2;i*i<=N;i++){
    M=N;
    while(M%i==0){
      M /= i;
    }
    if(M%i==1){
      sum++;
    }
    if(N%i==1){
      sum++;
    }
    if(N==i*i+1){
      sum--;
    }
  }
  sum += 2;
  if(N==2){sum=1;}
  cout << sum << endl;
}

