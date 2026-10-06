#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define nl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string N, M;
    cin >> N >> M;
    int n = N.length(), m = M.length();
    vector<vi> dp(n + 1, vi(m + 1));
    for (int i = 1; i <= n; i++) dp[i][0] = i;
    for (int j = 1; j <= m; j++) dp[0][j] = j;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            dp[i][j] = (N[i-1] == M[j-1])
                ? dp[i-1][j-1]
                : 1 + min({
                    dp[i-1][j],
                    dp[i][j-1],
                    dp[i-1][j-1]
                });
        }
    }
    cout << dp[n][m] << nl;
}
