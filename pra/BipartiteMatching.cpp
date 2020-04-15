#include<bits/stdc++.h>
using namespace std;
#define MAX_V 1000

vector<int> G[MAX_V];
int match[MAX_V],V;
bool used[MAX_V];
void add_edge(int u,int v)
{
	G[u].push_back(v);
	G[v].push_back(u);
}


bool dfs(int v)
{
	used[v] = true;
	for (int i = 0;i < G[v].size(); i++)
	{
		int u = G[v][i], w = match[u];
		cout << "v=" << v  << " u=" << u << " w=" << w << endl; 
    	if(w < 0 || !used[w] && dfs(w))
		{
			cout << "ok" << endl;
			match[v] = u;
			match[u] = v;
			return true;
		}
  	}
  	cout <<"no" << endl;
  	return false;
}

int bipartite_matching()
{
	int res=0;
	memset(match,-1,sizeof(match));
	for(int v=0;v<V;v++)
	{
		cout << "---------------" << endl;
		cout << "v=" << v << endl;
		if(match[v]<0)
		{
			memset(used,0,sizeof(used));
      		if(dfs(v))
			{
				res++;
				cout << res << endl;
      		}
    	}
  	}
  	return res;
}

int main(){
  int x,y,e,a,b,i;
  cin>>x>>y>>e;
  for(i=0;i<e;i++){
    cin>>a>>b;
    add_edge(a,x+b);
  }
  V=x+y;
  cout << bipartite_matching() << endl;
  cout << "------------------" << endl;
  for (int i = 0; i < V; i++) cout << match[i] << endl;
  return 0;
}
