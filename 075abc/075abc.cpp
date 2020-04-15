#include <bits/stdc++.h>
#define PI 3.1415926535897
using namespace std;
typedef long long ll;
const int INF = 1000000000;
const ll LINF = 1000000000000000000; //1e18
const double EPS = 1e-10;            //

int main(void)
{
    int H, W;
    cin >> H >> W;

    H += 2;
    W += 2;
    //vector<string> S(H);
    
	string S(H);
  	// init
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            S[i][j] = '.';
        }
    }

    // input
    for (int i = 1; i < H - 1; i++)
    {
        for (int j = 1; j < W - 1; j++)
        {
            cin >> S[i][j];
        }
    }

    // debug
    // for (int i = 0; i < H; i++)
    // {
    //     for (int j = 0; j < W; j++)
    //     {
    //         printf("%c", S[i][j]);
    //     }
    //     printf("\n");
    // }
    int counter;
    for (int i = 1; i < H - 1; i++)
    {
        for (int j = 1; j < W - 1; j++)
        {
            counter = 0;
            if (S[i][j] == '.')
            {
                if (S[i - 1][j - 1] == '#')
                    counter++;
                if (S[i - 1][j] == '#')
                    counter++;
                if (S[i - 1][j + 1] == '#')
                    counter++;
                if (S[i][j - 1] == '#')
                    counter++;
                if (S[i][j + 1] == '#')
                    counter++;
                if (S[i + 1][j - 1] == '#')
                    counter++;
                if (S[i + 1][j] == '#')
                    counter++;
                if (S[i + 1][j + 1] == '#')
                    counter++;

                S[i][j] = counter + '0';
            }
        }
    }
    for (int i = 1; i < H - 1; i++)
    {
        for (int j = 1; j < W - 1; j++)
        {
            printf("%c", S[i][j]);
        }
        printf("\n");
    }
    return (0);
}

