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

int N, M;
vi L;

void permute(vi &cur, vector<bool> &used) {
    if (cur.size() == M) {
        for (auto &x : cur) cout << x << " ";
        cout << endl;
    }

    for (int i = 0; i < N; i++) {
        if (!used[i]) {
            cur.push_back(L[i]);
            used[i] = 1;
            permute(cur, used);
            used[i] = 0;
            cur.pop_back();
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;
    L.resize(N);
    for (auto &x : L) cin >> x;
    sort(L.begin(), L.end());

    vi cur;
    vector<bool> used(N, 0);
    permute(cur, used);
}
