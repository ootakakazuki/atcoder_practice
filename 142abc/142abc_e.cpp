#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

#define COUT(x) cout << #x << " = " << (x) << " (L" << __LINE__ << ")" << endl
template<class T1, class T2> ostream& operator << (ostream &s, pair<T1,T2> P)
{ return s << '<' << P.first << ", " << P.second << '>'; }
template<class T> ostream& operator << (ostream &s, vector<T> P)
{ for (int i = 0; i < P.size(); ++i) { if (i > 0) { s << " "; } s << P[i]; } return s; }


const long long INF = 1LL<<60;
 
int N, M;
vector<long long> a, b;
vector<int> c;
 
 
long long dp[1100][5000];
 
int main() {
    int N, M; cin >> N >> M;
    vector<long long> a(M), b(M), c(M, 0); // c はビットで表す
    for (int i = 0; i < M; ++i) {
        cin >> a[i] >> b[i];
        for (int j = 0; j < b[i]; ++j){
            int t; cin >> t; --t;
            c[i] += (1<<t);
        }
    }
 
    for (int i = 0; i < 1100; ++i) for (int j = 0; j < 5000; ++j) dp[i][j] = INF;
    dp[0][0] = 0;
    
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < (1<<N); ++j) {
            chmin(dp[i+1][j], dp[i][j]);
            cout << "dp[" << i + 1 << "][" <<  j << "]=" << dp[i + 1][j] << endl;

            int nj = j | c[i];
            chmin(dp[i+1][j | c[i]], dp[i][j] + a[i]);
            cout << "dp[" << i + 1 << "][" << (j | c[i]) << "]=" << dp[i + 1][j | c[i]] << endl;
        }
    }
 
    cout << (dp[M][(1<<N)-1] < INF ? dp[M][(1<<N)-1] : -1) << endl;               
}
