
/*
D - Number of Amidakuji
https://atcoder.jp/contests/abc113/tasks/abc113_d

H     W   K
高さ　幅　目的地　

入力例
2 3 3

出力例
1
条件を満たす数

*/


#include <iostream>
#include <vector>
using namespace std;
const int MOD = 1000000007;

void	bit_pri(int n)
{
	int hoge[100];
	int i = 0;
	int count = 4;
	while (n || count)
	{
		hoge[i++] = n % 2;
		n /= 2;
		count--;
	}
	while (i)
	{
		cout << hoge[--i];
	}
	cout << endl;
}

// abc 113 d amidakuji


void add(long long &a, long long b) {a+=b;if(a>=MOD)a-=MOD;}

int H, W, K;
long long solve() {
    --K;
    vector<vector<long long> > dp(H+1, vector<long long>(W, 0));
    dp[0][0] = 1;
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            for (int bit = 0; bit < 1<<(W-1); ++bit) {
                bool ok = true;
                for (int k = 0; k < W-2; ++k) {
                    if ((bit & (1<<k)) && (bit & (1<<(k+1)))) ok = false;
                }
                if (!ok) continue;
                int nj = j;
                if (bit & (1<<j)) nj = j+1;
                else if (j > 0 && (bit & (1<<(j-1)))) nj = j-1;
                add(dp[i+1][nj], dp[i][j]);

				cout << "bit=" << bit << endl;
				bit_pri(bit);
				cout << "i=" << i << endl;
				cout << "j=" << j << endl;
				cout << "dp[" << i + 1 << "][" << nj << "]=" << dp[i + 1][nj] << endl;
            	cout << "------------" << endl;
			}
        }
    }
    return dp[H][K];
}

int main() {
    while (cin >> H >> W >> K) cout << solve() << endl;
}
