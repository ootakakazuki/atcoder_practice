#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
const ld eps = 1.0e-12; // 許容される誤差

ld mysqrtl(ld x)
{
  ld a = sqrt((double)x); // 近似値
  do {
    a = (a + x/a) / 2.0L;
  } while (fabsl(x - a*a) > eps);
  return a;
}

int		main()
{
	ld a, b, c; cin >> a >> b >> c;
	
	if (mysqrtl(a) + mysqrtl(b) < mysqrtl(c))
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
}

