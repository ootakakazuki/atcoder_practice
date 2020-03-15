#include <bits/stdc++.h>
using namespace std;


void	getZArr(string str, int Z[])
{
	int		n = str.size();
	int		L, R, k;

	L = R = 0;
	for (int i = 1; i < n; i++)
	{
		if (i > R)
		{
			L = R = i;
			while (R < n && str[R - L] == str[R])
				R++;
			Z[i] = R - L;
			R--;
		}
		else
		{
			k = i - L;
			if (Z[k] < R - i + 1)
				Z[i] = Z[k];
			else
			{
				L = i;
				while (R < n && str[R - L] == str[R])
					R++;
				Z[i] = R - L;
				R--;
			}
		}
	}
}


void	search(string text, string pattern)
{
	string concat = pattern + "$" + text;
	int l = concat.size();
	cout << l << endl;
	int Z[l];
	getZArr(concat, Z);

	for (int i = 1; i < l; i++)
	{
		cout << "Z["<<i<<"]=" << Z[i] << endl;
	}
	cout << endl;

	for (int i = 0; i < l; i++)
	{
		if (Z[i] == pattern.size())
		{
			cout << "Pattern found at index " << i - pattern.size() - 1 <<endl;
		}
	}
}

int		main()
{
	string text = "GEEKS FOR GEEKS";
	string pattern = "GEEKS";
	search(text, pattern);
}

