#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define ff first
#define ss second
#define vi vector<int>
#define endl "\n"
#define pii pair<int, int>
#define pis pair<int, string>

int custom(pii a, pii b) {
    if (a.ff == b.ff) return a.ss < b.ss;
    return a.ff < b.ff;
}
int main() {
    int N;
    cin >> N;
    vector<pii> ps(N);
    for (auto &x : ps) cin >> x.ff >> x.ss;

    sort(ps.begin(), ps.end(), custom);

    for (auto &x : ps) cout << x.ff << " " << x.ss << endl;
}
