#include<bits/stdc++.h>
using namespace std;
int n, m, wh, ans, dx[] = {0, 0, 1, -1}, dy[] = {1, -1, 0, 0};
char s[55][55];
struct P{int x, y, c;};
queue<P> qu;

int main(){
	scanf("%d %d\n", &n, &m);
	for(int i = 1; i <= n; i++){
		scanf("%s", s[i]+1);
		for(int j = 1; j <= m; j++) if(s[i][j] == '.') wh++;
	}
	if(s[1][1] == '.') qu.push((P){1, 1, 1});
	while(!qu.empty()){
		P tmp = qu.front(); qu.pop();
		if(tmp.x == n && tmp.y == m) ans = tmp.c;
		for(int i = 0; i < 4; i++) {
			int x = tmp.x + dx[i], y = tmp.y + dy[i];
			if(s[x][y] == '.'){
				qu.push((P){x, y, tmp.c+1});
				s[x][y] = '#';
			}
		}
	}
	printf("%d\n", ans ? wh - ans : -1);
}

