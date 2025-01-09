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

    vector<vi> adj(N + 1);
    while (M--) {
        int src, dst;
        cin >> src >> dst;
        adj[src].push_back(dst);
        adj[dst].push_back(src);
    }

    pii ans = {INT16_MAX, 0}; // {connections, person}
    for (int person = 1; person <= N; person++) {
        int connections = 0;
        vi neighbours(N + 1, INT16_MAX);
        queue<pii> q; // {person, dist}
        q.push({person, 0});
        neighbours[person] = 0;

        while (!q.empty()) {
            int k = q.front().ff;
            int dist = q.front().ss;
            q.pop();

            for (auto &x : adj[k]) {
                if (neighbours[x] == INT16_MAX) {
                    neighbours[x] = dist + 1;
                    q.push({x, dist + 1});
                }
            }
        }

        for (int i = 1; i <= N; i++) connections += neighbours[i];

        if (connections < ans.ff) {
            ans.ff = connections;
            ans.ss = person;
        }
    }

    cout << ans.ss << endl;
}
