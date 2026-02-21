#include<bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define vi vector<int>
#define pii pair<int, int>
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;

    vector<pii> items(N);
    for (auto &x : items) cin >> x.ff >> x.ss;

    vi dp(K+1, 0);
    for (auto &p : items) {
        int W = p.ff, V = p.ss;
        for (int w = K; w >= W; --w) {
            dp[w] = max(dp[w], dp[w - W] + V);
        }
    }

    cout << dp[K] << endl;
}
