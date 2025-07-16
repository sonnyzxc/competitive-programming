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

    int N, K;
    cin >> N >> K;
    vi coins(N);
    for (auto &x : coins) cin >> x;
    sort(coins.begin(), coins.end(), greater<>());

    int t = 0;
    for (auto &x : coins) {
        if (x > K) continue;

        t += K / x;
        K = K % x;
        if (K == 0) break;
    }

    cout << t << endl;
}
