#include <iostream>
#define N 100005
using namespace std;
typedef long long ll;

string a;
ll n, M=1e9+7, c[N];

ll f(ll p) {
	if(p==n) return 1;
	if(a[p]=='0') return f(p+1);
	return (2*f(p+1) + c[p+1]) % M;
}

int main() {
	cin >> a;
	n = a.size();
	c[n] = 1;
	for(ll i=n-1; i>=0; i--) c[i] = c[i+1]*3 % M;
	cout << f(0);
	return 0;
}

