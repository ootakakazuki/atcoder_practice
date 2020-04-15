#include <bits/stdc++.h>
using namespace std;

int     main()
{
	int x;  cin >> x;
	//int tab = {500,  5};
	int res = 0;
	//for (i; i < 2; i++)
	while (x >= 500)
	{
		res += 1000;
		x -= 500;
	}
	while (x >= 5)
	{
		res += 5;
		x -= 5;
	}
	cout << res << endl;
}
