/* It's Mooin' Time II */
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

    ll N;
    cin >> N;
    vector<ll> a(N);
    for (auto &x : a) cin >> x;

    unordered_map<ll, vector<ll>> p;
    for (ll i = 0; i < N; i++) p[a[i]].push_back(i);

    ll ans = 0;
    unordered_set<ll> s;
    for (auto &[x, l] : p) {
        if (l.size() < 2) continue;
        ll so = l[1];
        s.clear();
        for (int j = 0; j < so; j++) {
            if (a[j] != x) s.insert(a[j]);
        }
        ans += s.size();
    }

    cout << ans << endl;
}
