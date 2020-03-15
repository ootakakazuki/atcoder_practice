#include <bits/stdc++.h>
using namespace std;

int		main()
{
	string s;
	cin >> s;

	int Q;
	cin >> Q;
	int d = 1;

	string A = "";
	string B = "";

	while (Q--)
	{
		int n;
		cin>>n;
		if (n == 1)
		{
			d *= -1; 
		}
		else
		{
			int F;
			string	C;
			cin >> F >> C;
			if ((F == 1 && d == 1) || (F == 2 && d == -1))
			{
				A = C + A;
			}
			else
			{
				B = B + C;
			}
		}
	}
}
