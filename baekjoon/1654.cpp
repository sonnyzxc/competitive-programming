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

ll cables(ll length, vector<ll> &l) {
    int t = 0;
    for (auto &x : l) t += x / length;
    return t;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll K, N;
    cin >> K >> N;

    vector<ll> l(K);
    ll m = -1;
    for (auto &x : l) {
        cin >> x;
        m = max(m, x);
    }

    ll L = 1, R = m, mid, maxC = 0;
    while (L <= R) {
        mid = (L + R) / 2;
        int c = cables(mid, l);

        if (c >= N) {
            maxC = max(maxC, mid);
            L = mid + 1;
        } else {
            R = mid - 1;
        }
    }

    cout << maxC << endl;
}
