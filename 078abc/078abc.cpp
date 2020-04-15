#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int n, a, b, c;
  scanf("%d%d%d", &n, &a, &b);
  for(int i = 0; i < n-1; i++) scanf("%d", &a);
  scanf("%d", &c);
  printf("%d\n", (n-1 ? max(abs(a-c), abs(b-c)) : abs(b-c)));
}

