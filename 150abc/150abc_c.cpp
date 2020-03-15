#include <bits/stdc++.h>
using namespace std;

void	print(vector<int> P, int N)
{
	for (int i = 0; i < N; i++) cout << P[i];
}

int		main()
{
	int N; cin >> N;
	vector<int> P(N);
	vector<int> Q(N);
	int count = 0;
	for (int i = 0; i < N; i++) cin >> P[i];
	for (int i = 0; i < N; i++) cin >> Q[i];
	if (P == Q) 
	{
		cout<<0<<endl;
		return 0;
	}
	if (P > Q)
	{
		swap(P, Q);
	}
	while (next_permutation(P.begin(), P.end()))
	{
		count++;
		if (P == Q)
		{
			cout << count << endl;
			return 0;
		}
	}
}
