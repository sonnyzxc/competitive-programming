#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define ff first
#define ss second
#define vi vector<int>
#define endl "\n"

int main() {
    int T, K, N;
    vector<vi> dp(15, vi(15, -1));
    cin >> T;
    // if (X == 0) return Y * (Y + 2) / 2;

    // if (dp[X][Y] != -1) return dp[X][Y];

    // int r = 0;
    // for (int i = 1; i <= Y; i++) {
    //     r += solve(X - 1, i, dp);
    // }

    // dp[X][Y] = r;

    //
    while (T--) {
        cin >> K >> N;

        for (int i = 0; i <= K; i++) {
            for (int j = 1; j <= N; j++) {
                if (i == 0) {
                    dp[0][j] = j;
                } else if (j == 1) {
                    dp[i][1] = 1;
                } else {
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
                }
            }
        }
        cout << dp[K][N] << endl;
    }
}
