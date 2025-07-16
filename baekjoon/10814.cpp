#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define ff first
#define ss second
#define vi vector<int>
#define endl "\n"
#define pis pair<int, string>

int organise(pis a, pis b) {
    return a.ff < b.ff;
}

int main() {
    int N;
    cin >> N;
    vector<pis> cs(N);
    for (auto &x : cs) cin >> x.ff >> x.ss;

    stable_sort(cs.begin(), cs.end(), organise);

    for (auto &x : cs) cout << x.ff << " " << x.ss << endl;
}
