#include <bits/stdc++.h>
using namespace std;

int     main()
{
	int x, y, a, b, c; cin >> x >> y >> a >> b >> c;
	int res = 0;
	vector<int> A(a); 
	vector<int> B(b); 
	vector<int> C(c); 
	vector<int> A2; 

	for (int i = 0; i < a; i++) cin >> A[i];
	for (int i = 0; i < b; i++) cin >> B[i];
	for (int i = 0; i < c; i++) cin >> C[i];

	sort(A.begin(), A.end(), greater<int>());
	for (int i = 0; i < x; i++) A2.push_back(A[i]);
	sort(B.begin(), B.end(), greater<int>());
	for (int i = 0; i < y; i++) A2.push_back(B[i]);
	sort(A2.begin(), A2.end(), greater<int>());
	for (int i = 0; i < c; i++) A2.push_back(C[i]);
	sort(A2.begin(), A2.end(), greater<int>());
	for (int i = 0; i < x + y; i++) res += A2[i];
	cout << res << endl;
		

	

}
