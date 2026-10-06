#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define nl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vi a(n), b(m);
    for (auto &x : a) cin >> x;
    for (auto &y : b) cin >> y;

    vector<vi> dp(n + 1, vi(m + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            dp[i][j] = (a[i-1] == b[j-1])
                ? 1 + dp[i-1][j-1]
                : max(dp[i-1][j], dp[i][j-1]);
        }
    }

    vi res;
    for (int i = n, j = m; i > 0 && j > 0; ) {
        if (a[i-1] == b[j-1]) {
            res.push_back(a[i-1]);
            i--;
            j--;
        } else if (dp[i-1][j] >= dp[i][j-1]) i--;
        else j--;
    }
    reverse(res.begin(), res.end());

    cout << dp[n][m] << nl;
    for (auto &x : res) cout << x << " ";
    cout << nl;
}
