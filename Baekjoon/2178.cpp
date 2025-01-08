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

    vector<string> arr(N);
    for (auto &x : arr) cin >> x;

    vector<vi> shortest(N, vi(M, -1));

    vector<pii> dir = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    queue<pair<int, pii>> q;
    q.push({1, {0, 0}});
    shortest[0][0] = 1;

    while (!q.empty()) {
        int dist = q.front().ff;
        int x = q.front().ss.ff;
        int y = q.front().ss.ss;
        q.pop();

        for (auto &[dx, dy] : dir) {
            int nX = x + dx;
            int nY = y + dy;
            if (nX < N && nX >= 0 && nY < M && nY >= 0 && arr[nX][nY] == '1') {
                if (shortest[nX][nY] == -1) {
                    shortest[nX][nY] = dist + 1;
                    q.push({dist + 1, {nX, nY}});
                }
            }
        }
    }

    cout << shortest[N-1][M-1] << endl;
}
