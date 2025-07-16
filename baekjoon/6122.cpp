/* USACO Open 2009 Contest -> Bronze Q1. */
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

    int N, Nlines;
    cin >> N >> Nlines;

    vector<stack<pii>> c(N);
    vector<pii> ans(N, {0, 0});
    int C, HH, MM;
    string keyword;
    while (Nlines--) {
        cin >> C >> keyword >> HH >> MM;
        if (keyword == "START") {
            c[C - 1].push({HH, MM});
        } else {
            pii start = c[C - 1].top();
            c[C - 1].pop();
            int hh = HH - start.ff - (MM < start.ss);
            int mm = (MM < start.ss ? 60 - start.ss + MM : MM - start.ss);
            ans[C - 1] = {ans[C - 1].ff + hh, ans[C - 1].ss + mm};
        }
    }

    for (auto &[hh, mm] : ans) {
        if (mm >= 60) {
            hh += mm / 60;
            mm %= 60;
        }
        cout << hh << " " << mm << endl;
    }
}
