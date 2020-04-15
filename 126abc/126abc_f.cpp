#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(int M, int K) {
    if (M == 0) {
        if (K != 0) cout << -1 << endl;
        else cout << "0 0" << endl;
        return;
    }
    if (M == 1) {
        if (K != 0) cout << -1 << endl;
        else cout << "0 0 1 1" << endl;
        return;
    }

    if (K >= (1<<M)) {
        cout << -1 << endl;
        return;
    }
    if (K == 0) {
        for (int bit = 0; bit < (1<<M); ++bit) {
            cout << bit << " ";
        }
        for (int bit = (1<<M)-1; bit >= 0; --bit) {
            cout << bit << " ";
        }
        cout << endl;
        return;
    }
                

    using pint = pair<int,int>;
    vector<pint> v;
    for (int bit = 0; bit < (1<<M); ++bit) {
        v.push_back(pint(min(bit, bit^K), max(bit, bit^K)));
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for (int i = 0; i < v.size(); i += 2) {
        cout << v[i].first <<  " " << v[i].second << " "
             << v[i+1].first << " " << v[i+1].second << " "
             << v[i].second << " " << v[i].first << " "
             << v[i+1].second << " " << v[i+1].first << " ";
    }
    cout << endl;
}

int main() {
    int M, K; cin >> M >> K;
    solve(M, K);
}
