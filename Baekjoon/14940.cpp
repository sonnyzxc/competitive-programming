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

    int N, M;
    cin >> N >> M;
    vector<vi> adj(N, vi(M, 0));
    vector<vi> ans(N, vi(M, -1));
    queue<pii> q;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> adj[i][j];
            if (adj[i][j] == 2) {
                q.push({i, j});
                ans[i][j] = 0;
            }
        }
    }


    while (!q.empty()) {
        int x = q.front().ff;
        int y = q.front().ss;
        int dist = ans[x][y];
        q.pop();

        for (auto &[dx, dy] : vector<pii>{{-1, 0}, {1, 0}, {0, 1}, {0, -1}}) {
            int newX = x + dx, newY = y + dy;
            if (newX >= 0 && newX < N && newY >= 0 && newY < M) {
                if (adj[newX][newY] != 0 && ans[newX][newY] == -1) {
                    ans[newX][newY] = ans[x][y] + 1;
                    q.push({newX, newY});
                }
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) cout << (adj[i][j] == 0 ? 0 : ans[i][j]) << " ";
        cout << endl;
    }
}