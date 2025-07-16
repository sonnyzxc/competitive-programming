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

bool pairSort(pii a, pii b) {
    if (a.ss == b.ss) return a.ff < b.ff;
    return a.ss < b.ss;
}

int main() {
    int N;
    cin >> N;
    vector<pii> vals(N);
    for (auto &x : vals) {
        cin >> x.ff >> x.ss;
    }

    sort(vals.begin(), vals.end(), pairSort);

    for (auto &x: vals) {
        cout << x.ff << " " << x.ss << endl;
    }
}
