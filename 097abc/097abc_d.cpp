#include<cstdio>
#include <bits/stdc++.h>
#include<algorithm>
#define MAX 100005
#define MAXV 3000000000
using namespace std;

int p[MAX];

int root(int x){
  if(x != p[x]) p[x] = root(p[x]);
  return p[x];
}

int main(){
  int n, m, a[MAX], x, y, c = 0;
  scanf("%d%d", &n, &m);
  for(int i = 1; i <= n; i++){
    scanf("%d", &a[i]);
    p[i] = i;
  }
  for(int i = 0; i < m; i++){
    scanf("%d%d", &x, &y);
    p[root(x)] = root(y); 
  }
  for(int i = 1; i <= n; i++) cout << p[i];
  cout << endl;
  for(int i = 1; i <= n; i++){
    if(root(a[i]) == root(i)) c++;
  }
  for(int i = 1; i <= n; i++) cout << p[i];
  printf("%d", c);
}

