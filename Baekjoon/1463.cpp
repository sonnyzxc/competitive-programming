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

/* another valid solution would be to BFS 3 operations, and find min.
where
- left subtree: % 3 == 0, -3
- middle: % 2 == 0, -2
- right: -1
      5
    / | \
   N  N  4
       / | \
      N  2   3
        /|\ /|\
       N 1 1 N 2
              ...
*/
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vi dp(1000001, 0);
    int N;
    cin >> N;

    for (int i = 2; i <= N; i++) {
        dp[i] = dp[i - 1] + 1;
        if (!(i % 3)) dp[i] = min(dp[i], dp[i / 3] + 1);
        if (!(i % 2)) dp[i] = min(dp[i], dp[i / 2] + 1);
    }

    cout << dp[N] << endl;
}
