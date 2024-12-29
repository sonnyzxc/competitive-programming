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

/* Unfinished. */
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    ll x;
    cin >> N;
    vector<ll> r(N);
    for (auto &x : r) cin >> x;

    for (int i = 0; i < N; i++) {
        int t = 0;
        ll cur = r[i];
        for (int j = 0; j < N; j++) {
            if (i == j) continue;
            if (cur > r[j]) t++;
        }
        cout << t << " ";
    }
    cout << endl;
}
