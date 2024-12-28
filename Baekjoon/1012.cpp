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

/* brushing up on BFS! */
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int M, N, K;
        cin >> M >> N >> K;
        vector<vi> field(N, vi(M, 0));
        vector<vector<bool>> visited(N, vector<bool>(M, 0));
        while (K--) {
            int x, y;
            cin >> y >> x;
            field[x][y] = 1;
        }

        int t = 0;
        vector<pii> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (field[i][j] && !visited[i][j]) {
                    t++;
                    queue<pii> q;
                    q.push({i, j});
                    visited[i][j] = 1;

                    while (!q.empty()) {
                        int cy = q.front().ff;
                        int cx = q.front().ss;
                        q.pop();

                        for (auto [dy, dx] : directions) {
                            int ny = cy + dy, nx = cx + dx;
                            if (ny >= 0 && ny < N && nx >= 0 && nx < M && field[ny][nx] && !visited[ny][nx]) {
                                visited[ny][nx] = 1;
                                q.push({ny, nx});
                            }
                        }
                    }
                }
            }
        }

        cout << t << endl;
    }
}
