#include <bits/stdc++.h>
using namespace std;

int		main()
{
	int n; cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)cin >> v[i];
	sort(v.begin(), v.end());
	
	int q; cin >> q;
	int ans = 0;
	
	for (int i = 0; i < q; i++)
	{
		int a; cin >> a;
		int l = -1;
		int r = n;
		while (r - l > 1)
		{
			int mid = (l + r)/2;
			if (v[mid] == a)
			{	
				ans++;
				break;
			}
			else if (a < v[mid]) r = mid;
			else l = mid;
		}
	}
	cout << ans << endl;
}
