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
vi arr;

void solve(int k, int start) {
    if (k == M) {
        for (auto &x: arr) cout << x << " ";
        cout << endl;
        return;
    }

    for (int i = start; i <= N; i++) {
        arr.push_back(i);
        solve(k + 1, i);
        arr.pop_back();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;
    solve(0, 1);
}
