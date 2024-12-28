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

/* Got a little help/hint/inspiration from the internet.
   Credits: https://comain.tistory.com/306
   Thank you! */
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vi dp(N + 1, 0);
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= N; i++) {
        int j = 1, m = 5, exp = i - j * j;
        while (exp >= 0) {
            m = min(m, dp[exp]);
            j++;
            exp = i - j * j;
        }
        dp[i] = m + 1;
    }

    cout << dp[N] << endl;
}
