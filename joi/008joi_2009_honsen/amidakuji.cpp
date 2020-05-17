#include <iostream>
#include <cstdio>
#include <algorithm>
#define N 1005
#define M 100005
#define Y first
#define X second
using namespace std;

int n, m, h, k, sum, mx, s[N], t[N], a[M], b[M], c[N];
pair<int, int> eg[M];
int main()
{
	int i;
	cin >> n >> m >> h >> k;
	for (i = 1; i <= n; i++) {
		scanf("%d", &s[i]);
	}
	for (i = 0; i < m; i++) {
		scanf("%d %d", &eg[i].X, &eg[i].Y);
	}
	sort(eg, eg + m);
	for (i = 0; i < m; i++) {
		cout << eg[i].Y << " " << eg[i].X << endl;
	}
	for (i = 1; i <= n; i++) t[i] = i;
	for (i = 0; i < m; i++) {
		a[i] = t[eg[i].X];
		b[i] = t[eg[i].X + 1];
		swap(t[eg[i].X], t[eg[i].X + 1]);
	}
	for (i = 0; i < m; i++) {
		cout << "a[" << i << "]=" << a[i] << endl;
		cout << "b[" << i << "]=" << b[i] << endl;
	}
	for (i = 1; i <= n; i++)cout << "t[" << i  << "]=" << t[i] << endl;
	for (i = 1; i <= n; i++) c[t[i]] = s[i];
	for (i = 1; i <= n; i++) cout << "c=" << c[i] << endl;
	for (i = 1; i <= k; i++) sum += c[i];
	cout << "sum=" << sum << endl;
	for (i = 0; i < m; i++) {
		if (a[i] <= k && b[i] > k) mx = max(mx, c[a[i]] - c[b[i]]);
		else if (a[i] > k && b[i] <= k) mx = max(mx, c[b[i]] - c[a[i]]);
		cout << "mx=" << mx << endl;
	}
    cout << sum - mx << endl;
    return 0;
}

