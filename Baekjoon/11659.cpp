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

/* prefix sum! good ol' leetcode days. */
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;
    vi L;

    L.push_back(0);

    ll run = 0;
    for (int i = 1; i <= N; i++) {
        int x;
        cin >> x;
        run += x;
        L.push_back(run);
    }

    while (M--) {
        int x, y, t = 0;
        cin >> x >> y;
        cout << L[y] - L[x - 1] << endl;
    }
}
