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
int ans = -1;
vector<vi> arr;
vector<vector<bool>> visited;
vector<pii> dir = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

void checkT(int x, int y) {
    if (y + 1 < N && x + 2 < M) {
        ans = max(ans, arr[y][x] + arr[y][x+1] + arr[y][x+2] + arr[y+1][x+1]);
    }
    if (y - 1 >= 0 && x + 2 < M) {
        ans = max(ans, arr[y][x] + arr[y][x+1] + arr[y][x+2] + arr[y-1][x+1]);
    }
    if (y + 2 < N && x + 1 < M) {
        ans = max(ans, arr[y][x] + arr[y+1][x] + arr[y+2][x] + arr[y+1][x+1]);
    }
    if (y + 2 < N && x - 1 >= 0) {
        ans = max(ans, arr[y][x] + arr[y+1][x] + arr[y+2][x] + arr[y+1][x-1]);
    }
}

void dfs(int c, int val, int x, int y) {
    if (c == 4) {
        ans = max(ans, val);
        return;
    }

    if (!visited[y][x]) {
        val += arr[y][x];

        for (auto &[dx, dy] : dir) {
            int nx = x + dx, ny = y + dy;
            if (nx < M && nx >= 0 && ny < N && ny >= 0 && !visited[ny][nx]) {
                visited[y][x] = 1;
                dfs(c + 1, val, nx, ny);
                visited[y][x] = 0;
            }
        }
    }

    checkT(x, y);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;
    arr.resize(N, vi(M, 0));
    visited.resize(N, vector<bool>(M, 0));

    for (auto &x : arr) {
        for (auto &y : x) {
            cin >> y;
        }
    }

    for (int y = 0; y < N; y++) {
        for (int x = 0; x < M; x++) {
            dfs(0, 0, x, y);
        }
    }

    cout << ans << endl;
}
