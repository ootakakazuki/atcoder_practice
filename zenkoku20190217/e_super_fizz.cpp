#include <bits/stdc++.h>
using namespace std;

int		main()
{
	int N; cin >> N;
	int		i = 1;
	int flag = 0;
	while (i <= N)
	{
		if (i % 2 == 0) cout << "a", flag = 1;
		if (i % 3 == 0) cout << "b", flag = 1;
		if (i % 4 == 0) cout << "c", flag = 1;
		if (i % 5 == 0) cout << "d", flag = 1;
		if (i % 6 == 0) cout << "e", flag = 1;
		if (flag == 0) cout<< i;
		i++;
		cout<<endl;
		flag = 0;
	}
}
