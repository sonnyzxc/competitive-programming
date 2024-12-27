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

    int N, x;
    cin >> N;
    vi S(N + 1);
    for (int i = 1; i <= N; i++) cin >> S[i];

    vi dp(N + 1, 0);
    dp[1] = S[1];
    dp[2] = S[1] + S[2];

    for (int i = 3; i <= N; i++) {
        dp[i] = max(S[i - 1] + dp[i - 3], dp[i - 2]) + S[i];
    }

    cout << dp[N] << endl;
}
