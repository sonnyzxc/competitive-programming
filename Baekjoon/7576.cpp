#include <bits/stdc++.h>
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

    int M, N;
    cin >> M >> N;

    int unripe = 0;
    queue<pii> q;
    vector<vi> adj(N, vi(M));

    for (int n = 0; n < N; n++) {
        for (int m = 0; m < M; m++) {
            cin >> adj[n][m];
            if (!adj[n][m]) unripe++;
            if (adj[n][m] == 1) q.push({n, m});
        }
    }

    if (!unripe) {
        cout << 0 << endl;
        return 0;
    }

    vector<pii> dir = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
    int ans = 0;

    while (!q.empty()) {
        int size = q.size();

        for (int i = 0; i < size; i++) {
            int n = q.front().ff;
            int m = q.front().ss;
            q.pop();

            for (auto &[dm, dn] : dir) {
                int nm = m + dm, nn = n + dn;
                if (nm >= 0 && nm < M && nn >= 0 && nn < N) {
                    if (!adj[nn][nm]) {
                        adj[nn][nm] = 1;
                        q.push({nn, nm});
                        unripe--;
                    }
                }
            }
        }

        ans++;
    }

    cout << (unripe ? -1 : ans - 1) << endl;
}
