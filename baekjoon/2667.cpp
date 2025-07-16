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

    int N;
    cin >> N;

    vector<string> arr(N);
    for (auto &x : arr) cin >> x;

    vi ans;
    vector<vector<bool>> visited(N, vector<bool>(N, 0));
    queue<pii> q;

    vector<pii> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    int temp = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (arr[i][j] == '1' && !visited[i][j]) {
                q.push({i, j});
                visited[i][j] = 1;

                while (!q.empty()) {
                    int x = q.front().ff;
                    int y = q.front().ss;
                    q.pop();

                    for (auto &[dx, dy] : dir) {
                        int nX = x + dx, nY = y + dy;
                        if (nX >= 0 && nX < N && nY >= 0 && nY < N && !visited[nX][nY] && arr[nX][nY] == '1') {
                            temp++;
                            q.push({nX, nY});
                            visited[nX][nY] = 1;
                        }
                    }
                }

                ans.push_back(temp);
                temp = 1;
            }
        }
    }

    cout << ans.size() << endl;
    sort(ans.begin(), ans.end());
    for (auto &x : ans) cout << x << endl;
}
