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

    int N;
    cin >> N;
    vector<pair<ll, int>> r(N);

    ll x;
    for (int i = 0; i < N; i++) {
        cin >> x;
        r[i] = {x, i};
    }
    sort(r.begin(), r.end());

    vector<ll> ans(N);
    ll rank = 0;

    ans[r[0].ss] = rank;
    for (int i = 1; i < N; i++) {
        if (r[i].ff != r[i - 1].ff) rank++;
        ans[r[i].ss] = rank;
    }

    for (auto &x : ans) cout << x << " ";
}
