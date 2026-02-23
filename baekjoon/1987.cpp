#include <bits/stdc++.h>
using namespace std;

#define vc vector<char>
#define vb vector<bool>
#define pii pair<int, int>
#define endl "\n"

vector<pii> dirs = { {1, 0}, {0, 1}, {-1, 0}, {0, -1} };
int R, C, ans = 0;
vector<vc> grid;
// vb used(26, 0);

void dfs(int r, int c, int mask, int depth) {
    ans = max(ans, depth);

    for (auto &[dr, dc] : dirs) {
        int nr = r + dr, nc = c + dc;
        if (nr < 0 || nr >= R || nc < 0 || nc >= C) continue;

        // int idx = grid[nr][nc] - 'A';
        // if (used[idx]) continue;

        // used[idx] = 1;
        // dfs(nr, nc, depth + 1);
        // used[idx] = 0;

        /* smart bit-mask sols */
        int bit = 1 << (grid[nr][nc] - 'A');
        if (mask & bit) continue; // seen before
        dfs(nr, nc, mask | bit, depth + 1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> R >> C;
    grid.assign(R, vc(C, ' '));

    for (auto &r : grid) {
        for (auto &c : r) cin >> c;
    }

    // used[grid[0][0] - 'A'] = 1;
    int startMask = 1 << (grid[0][0] - 'A');
    dfs(0, 0, startMask, 1);
    cout << ans << endl;
}
