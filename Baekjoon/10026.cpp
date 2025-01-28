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

int N;
vector<string> adj;
vector<vector<bool>> visited;
vector<pii> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

void bfs(int x, int y, char col) {
    queue<pii> q;
    q.push({x, y});
    visited[x][y] = 1;

    while (!q.empty()) {
        int x = q.front().ff, y = q.front().ss;
        q.pop();

        for (auto &[dx, dy] : dir) {
            int nx = x + dx, ny = y + dy;
            if (nx >= 0 && nx < N && ny >= 0 && ny < N && !visited[nx][ny] && adj[nx][ny] == col) {
                q.push({nx, ny});
                visited[nx][ny] = 1;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
    adj.resize(N);
    for (auto &s : adj) cin >> s;
    int H = 0, C = 0;

    visited.assign(N, vector<bool>(N, 0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (!visited[i][j]) {
                bfs(i, j, adj[i][j]);
                H++;
            }
        }
    }

    for (auto &s : adj) replace(s.begin(), s.end(), 'G', 'R');
    visited.assign(N, vector<bool>(N, 0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (!visited[i][j]) {
                char col = adj[i][j];
                bfs(i, j, col);
                C++;
            }
        }
    }

    cout << H << " " << C << endl;
}
