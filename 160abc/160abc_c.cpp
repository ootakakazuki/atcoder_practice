#include <bits/stdc++.h>
using namespace std;

int     main()
{
	int K, N; cin >> K >> N;
	vector<int> a(N);
	vector<int> b(N);
	for (int i = 0; i < N; i++) cin >> a[i];
	for (int i = 0; i < N - 1; i++) b[i] = abs(a[i] - a[i + 1]);
	b[N - 1] = K - a[N - 1] + a[0];
	sort(b.begin(), b.end()); //, greater<int>());
	//for (int i = 0; i < N; i++) cout << b[i] << endl;
	int res = 0;
	for (int i = 0; i < N - 1; i++) res += b[i];
	cout << res << endl;
}
