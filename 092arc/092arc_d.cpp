#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<int> a, b;

int main() {
    cin >> N;
    a.resize(N); for (int i = 0; i < N; ++i) cin >> a[i];
    b.resize(N); for (int i = 0; i < N; ++i) cin >> b[i];
    int res = 0;
    for (int digit = 29; digit >= 0; --digit) {
        int bekihigh = 1<<(digit+1), bekilow = 1<<digit;
        cout << "bekihigh=" << bekihigh << " bekilow=" << bekilow << endl;
		for (int i = 0; i < N; ++i)
		{
			//cout << "a[" << i << "]=" << a[i] << endl;
			a[i] %= bekihigh, b[i] %= bekihigh;
			cout << "a[" << i << "]=" << a[i] << endl;
			//cout << "b[" << i << "]=" << b[i] << endl;
		}
        sort(b.begin(), b.end());
		for (int i = 0; i < N; i++)cout << "b[" << i << "]=" << b[i] << endl;
        long long num = 0;
        for (int i = 0; i < N; ++i) {
            int add = 0;
            if (bekilow - a[i] >= 0) {
				cout << "aaa" << endl;
                add += lower_bound(b.begin(), b.end(), bekihigh-a[i])
                        - lower_bound(b.begin(), b.end(), bekilow-a[i]);
                
            }
            else {
				cout << "bbb" << endl;
                add += lower_bound(b.begin(), b.end(), bekihigh-a[i]) - b.begin();
                add += lower_bound(b.begin(), b.end(), bekihigh)
                        - lower_bound(b.begin(), b.end(), bekihigh + bekilow - a[i]);
            }
			cout << "add = " << add << endl;
            num += add;
			cout << "num=" << num << endl;
        }
        if (num & 1) res += bekilow;
		cout << "res=" << res << endl;
    }
    cout << res << endl;
}
