#include <bits/stdc++.h>
using namespace std;

int H, W;
int res;

bool	check(int i, int j, vector<string> m)
{
	return !(i < 0 || i >= H || j < 0 || j >= W || m[i][j] == '#');
	
}

void	right(int i, int j, vector<string> m)
{
	if (check(i, j, m))
	{
		res++;
		right(i, j + 1, m);
	}
	return ;
}

void    left(int i, int j, vector<string> m)
{
    if (check(i, j, m)) 
    {   
        res++;
        left(i, j - 1, m); 
    }   
    return ;
}

void    up(int i, int j, vector<string> m)
{
    if (check(i, j, m))
    {
        res++;
        up(i - 1, j, m);
    }
    return ;
}

void    down(int i, int j, vector<string> m)
{
    if (check(i, j, m)) 
    {   
        res++;
        down(i + 1, j, m); 
    }   
    return ;
}

void	dfs(int i, int j, vector<string> m)
{
	right(i, j + 1, m);
	left(i, j - 1, m);
	up(i - 1, j, m);
	down(i + 1, j, m);
}


int		main()
{
	cin >> H >> W;
	int flag = 0;
	vector<string> m(H);
	for (int i = 0; i < H; i++) cin >> m[i];

	int ans = 0;
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			res = 1;
			if (m[i][j] == '.')
			{
				flag = 1;
				dfs(i, j, m);
				ans = max(ans, res);
			}
		}
	}
	cout << ((flag) ? ans : 0) << endl;
}

