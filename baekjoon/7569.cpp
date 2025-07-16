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

    int M, N, H;
    cin >> M >> N >> H;

    int unripe = 0;
    queue<tuple<int, int, int>> q;
    vector<vector<vi>> adj(H, vector<vi>(M, vi(N)));

    for (int h = 0; h < H; h++) {
        for (int n = 0; n < N; n++) {
            for (int m = 0; m < M; m++) {
                cin >> adj[h][m][n];
                if (adj[h][m][n] == 0) unripe++;
                if (adj[h][m][n] == 1) q.push({h, m, n});
            }
        }
    }

    if (!unripe) {
        cout << 0 << endl;
        return 0;
    }

    vector<tuple<int, int, int>> dir = {
        {1, 0, 0},  // up
        {-1, 0, 0}, // down
        {0, 1, 0},  // left
        {0, -1, 0}, // right
        {0, 0, 1},  // back
        {0, 0, -1}  // front
    };
    int ans = 0;

    while (!q.empty()) {
        int size = q.size();

        for (int i = 0; i < size; i++) {
            int h = get<0>(q.front());
            int m = get<1>(q.front());
            int n = get<2>(q.front());
            q.pop();

            for (auto &[dh, dm, dn] : dir) {
                int nh = h + dh, nm = m + dm, nn = n + dn;
                if (nh >= 0 && nh < H
                    && nm >= 0 && nm < M
                    && nn >= 0 && nn < N) {
                        if (adj[nh][nm][nn] == 0) {
                            adj[nh][nm][nn] = 1;
                            q.push({nh, nm, nn});
                            unripe--;
                        }
                    }
            }
        }

        ans++;
    }

    cout << (unripe ? -1 : ans - 1) << endl;
}
