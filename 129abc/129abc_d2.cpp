#include<bits/stdc++.h>
using namespace std;

int f[2003][2003][2];//0:x 1:y
int n,m,x,ans;
char ch[2003];
int main()
{
	scanf("%d %d", &n,&m);
	for (int i=1;i<=n;++i)
	{
		scanf("%s", ch+1);
		for (int j=1;j<=m;++j)
		{
			if (ch[j]=='.')
			{
				f[i][j][1]=f[i][j][0]=1; 
				f[i][j][0]+=f[i-1][j][0];
				f[i][j][1]+=f[i][j-1][1];
				
			}
		}
	}
	for (int k = 0; k < 2; k++)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				cout << f[i][j][k];
			}
			cout << endl;
		}
		cout << "\n\n";
	}

	for (int i=n;i>0;--i)
	{
		for (int j=m;j>0;--j)
		{
			if (f[i][j][0]!=0)f[i][j][0]=max(f[i][j][0],f[i+1][j][0]);
			if (f[i][j][1]!=0)f[i][j][1]=max(f[i][j][1],f[i][j+1][1]);
			ans=max(ans,f[i][j][0]+f[i][j][1]-1);
		}
	}
	printf("%d\n",ans);
	return 0;
}

