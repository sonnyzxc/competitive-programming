#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A;
    cin >> A;
    vi L(A);
    for (auto &x : L) cin >> x;

    int ans = 1;
    vi dp(A, 1);
    dp[0] = 1;

    for (int i = 1; i < A; i++) {
        for (int j = 0; j < i; j++) {
            if (L[j] < L[i]) dp[i] = max(dp[i], dp[j] + 1);
        }
        ans = max(ans, dp[i]);
    }

    cout << ans << endl;
}
