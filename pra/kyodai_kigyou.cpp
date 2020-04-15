#include <bits/stdc++.h>
using namespace std;
vector<int> E[150010];
int L[400000];
int R[400000];
int idx = 0;

/*
void	euler(int cu, int pre)
{
	L[cu] = idx;
	idx++;
	for (int to: E[cu]) if (to != pre) euler(to, cu);
	R[cu] = idx;	
}
*/

void euler(int cu, int pa = -1) { // [L[v],R[v])
    L[cu] = idx; idx++;
    for (int to : E[cu]) if (to != pa) euler(to, cu);
    R[cu] = idx;
}


int		main()
{
	int		N; cin >> N;
	int		root = -1;

	for (int i = 0; i < N; i++)
	{
		int		p; cin >> p;
		p--;
		if (p < 0)
			root = i;
		else
		{
			E[i].push_back(p);
			E[p].push_back(i);
		}
	}
	euler(root, -1);
	//for (int i = 0; i < )
	
	cout << L[0] << " " << R[0] << endl;
	cout << L[1] << " " << R[1] << endl;
	cout << L[2] << " " << R[2] << endl;
	cout << L[3] << " " << R[3] << endl;
	cout << L[4] << " " << R[4] << endl;
	cout << L[5] << " " << R[5] << endl;
	cout << L[6] << " " << R[6] << endl;
	
}

