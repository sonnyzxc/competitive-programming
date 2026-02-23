#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, k;
    vector<string> grid(2);
    cin >> N >> k >> grid[0] >> grid[1];

    vector<vi> v(2, vi(N, 0));
    queue<pii> q;
    q.push({0, 0});
    v[0][0] = 1;

    int t = 0;
    while (!q.empty()) {
        int n = q.size();
        while (n--) {
            auto [r, i] = q.front();
            q.pop();

            if (i < t) continue;

            // i + 1
            int ni = i + 1;
            if (ni >= N) {
                cout << 1 << endl;
                return 0;
            }
            if (ni >= t + 1 && grid[r][ni] == '1' && !v[r][ni]) {
                v[r][ni] = 1;
                q.push({r, ni});
            }

            // i - 1
            ni = i - 1;
            if (ni >= 0 && ni >= t + 1 && grid[r][ni] == '1' && !v[r][ni]) {
                v[r][ni] = 1;
                q.push({r, ni});
            }

            // i + k (switch)
            int nr = r ^ 1;
            ni = i + k;
            if (ni >= N) {
                cout << 1 << endl;
                return 0;
            }
            if (ni >=  t + 1 && grid[nr][ni] == '1' && !v[nr][ni]) {
                v[nr][ni] = 1;
                q.push({nr, ni});
            }
        }
        t++;
    }

    cout << 0 << endl;
}
