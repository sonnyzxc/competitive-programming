#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<tuple<int, int, int>> p(n);
    for (auto &[b, a, c] : p) cin >> a >> b >> c;
    sort(p.begin(), p.end());

    vector<ll> dp(n + 1, 0);
    for (int i = 1; i <= n ; i++) {
        auto [b, a, c] = p[i - 1];
        int j = lower_bound(p.begin(), p.begin() + i - 1, make_tuple(a, 0, 0)) - p.begin();
        dp[i] = max(dp[i-1], dp[j] + c);
    }

    cout << dp[n] << nl;
}
