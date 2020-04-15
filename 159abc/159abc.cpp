#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int H, W, K;
vector<string> fi;


void	print(vector<int> v, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "i = " << v[i] << endl;	
	}
	cout << endl;
}


int solve() {
    int res = 1<<29;
    for (int bit = 0; bit < (1<<(H-1)); ++bit) {
		cout << "bit = " << bit << endl;
        bool gok = true; // そもそも不可能な場合もあるので判定
        int N = 0;
        vector<int> ord(H, 0);
        for (int i = 0; i < H-1; ++i) {
            if (!(bit & (1<<i))) ord[i+1] = ord[i];
            else ord[i+1] = ord[i]+1, ++N;
        }
		cout << "ord" << endl;
		print(ord, H);
        int add = 0;
        vector<int> nums(N+1, 0);
        for (int w = 0; w < W; ++w) {
			cout << "w = " << w << endl;

            vector<int> one(N+1, 0);
            bool ok = true;
            for (int h = 0; h < H; ++h) {
                one[ord[h]] += fi[h][w] - '0';
                nums[ord[h]] += fi[h][w] - '0';
                if (one[ord[h]] > K) gok = false;
                if (nums[ord[h]] > K) ok = false;
            }
			cout << "one" << endl;
			print(one, N+1);
			cout << "nums" << endl;
			print(nums, N+1);

            if (!ok) ++add, nums = one;
        }
        if (gok) chmin(res, N + add);
		cout << "---------------------" << endl;
    }
    return res;
}

int main() {
    cin >> H >> W >> K;
    fi.resize(H);
    for (int i = 0; i < H; ++i) cin >> fi[i];
    cout << solve() << endl;
}
