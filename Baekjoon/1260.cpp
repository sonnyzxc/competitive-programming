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

/* Decided to go with a recursive implementation. */
void DFS(int V, unordered_map<int, vi> &m, vector<bool> &DFSvisited) {
    int cur = V;
    DFSvisited[cur] = 1;
    cout << cur << " ";

    for (auto &x : m[cur]) {
        if (!DFSvisited[x]) DFS(x, m, DFSvisited);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // input
    int N, M, V;
    cin >> N >> M >> V;

    // setup
    int src, dst;
    unordered_map<int, vi> m;
    while (M--) {
        cin >> src >> dst;
        m[src].push_back(dst);
        m[dst].push_back(src);
    }

    for (auto &[_, v] : m) {
        sort(v.begin(), v.end());
    }

    // DFS
    vector<bool> DFSvisited(N + 1, 0);
    DFS(V, m, DFSvisited);
    cout << endl;

    // BFS
    queue<int> q;
    q.push(V);
    vector<bool> visited(N + 1, 0);

    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        if (!visited[cur]) cout << cur << " ";
        visited[cur] = 1;
        for (auto &n : m[cur]) {
            if (!visited[n]) q.push(n);
        }
    }
    cout << endl;
}
