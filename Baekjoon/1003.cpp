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

    int T, m = 0;
    cin >> T;

    vi ts(T);
    for (auto &x : ts) {
        cin >> x;
        m = max(m, x);
    }

    vector<pii> pnn(41);
    pnn = {make_pair(1, 0), make_pair(0, 1)};
    for (int i = 2; i <= m; i++) {
        pii t1 = pnn[i-1];
        pii t2 = pnn[i-2];
        pnn.push_back(make_pair((t1.ff + t2.ff), (t1.ss + t2.ss)));
    }

    for (auto &x : ts) {
        cout << pnn[x].ff << " " << pnn[x].ss << endl;
    }
}
