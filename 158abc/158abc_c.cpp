#include <bits/stdc++.h>
using namespace std;


int		main()
{
	int A, B; cin >> A >> B;
	for (int i = 1; i < 1020; i++)
	{
		if (i * 8 / 100 == A && i * 10 / 100 == B)
		{
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
}

/*
int main ()
{
	int A, B; cin >> A >> B;
	int aa = A / 0.08;
	int bb = B / 0.1;

	if (aa == bb)
	{
		cout << aa << endl;
		return 0;
	}
	if (aa < bb)
	{
		A++;
		aa = A / 0.08;
		if (bb < aa)
		{
			cout << bb << endl;
			return 0;
		}
	}
	else if (aa> bb) 
	{
		B++;
		bb = B / 0.1;
		if (bb > aa)
		{
			cout << aa << endl;
			return 0;
		}
	}
	cout << -1 <<endl;
}

*/
