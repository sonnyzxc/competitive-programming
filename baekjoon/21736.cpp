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
    // -1: wall, 0: moveable space, 1: person
    pii start;
    vector<string> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        for (int j = 0; j < arr[i].size(); j++) {
            if (arr[i][j] == 'I') start = {i, j};
        }
    }

    vector<pii> dir = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
    vector<vector<bool>> visited(N, vector<bool>(M, 0));
    queue<pii> q;
    q.push(start);
    int ans = 0;
    while (!q.empty()) {
        pii k = q.front();
        q.pop();

        // cout << "{" << k.ff << ", " << k.ss << "}" << arr[k.ff][k.ss] << endl;

        if (visited[k.ff][k.ss] || arr[k.ff][k.ss] == 'X') continue;
        visited[k.ff][k.ss] = 1;
        if (arr[k.ff][k.ss] == 'P') ans++;
        for (auto &[dx, dy] : dir) {
            if (k.ff + dx >= 0 && k.ff + dx < N
                && k.ss + dy >= 0 && k.ss + dy < M) {
                q.push({k.ff + dx, k.ss + dy});
            }
        }
    }

    cout << ((ans > 0) ? to_string(ans) : "TT") << endl;
}
