#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define ff first
#define ss second
#define vi vector<int>
#define pii pair<int, int>
#define pis pair<int, string>
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    vi req(T);
    int m = 0;
    for (auto &x : req) {
        cin >> x;
        m = max(m, x);
    }

    vi dp(m + 1);
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int i = 4; i <= m; i++) dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];

    for (auto &x : req) cout << dp[x] << endl;
}
