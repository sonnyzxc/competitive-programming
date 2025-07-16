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

    ll N, M;
    cin >> N >> M;
    vector<ll> trees(N);

    ll m = 0;
    for (auto &x : trees) {
        cin >> x;
        m = max(m, x);
    }

    // height
    ll L = 0, R = m, ans = 0;
    while (L <= R) {
        ll cut = 0, mid = (L + R) / 2;
        for (auto &x : trees) {
            if (x > mid) cut += x - mid;
        }

        if (cut >= M) {
            ans = max(ans, mid);
            L = mid + 1;
        } else {
            R = mid - 1;
        }
    }

    cout << ans << endl;
}
