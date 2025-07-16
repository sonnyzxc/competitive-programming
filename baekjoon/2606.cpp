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

    int N, T;
    cin >> N >> T;

    vector<vi> adj(N + 1);

    while (T--) {
        int src, dst;
        cin >> src >> dst;
        adj[src].push_back(dst);
        adj[dst].push_back(src);
    }

    int t = 0;
    queue<int> q;
    q.push(1);
    vector<bool> visited(N + 1, 0);
    visited[1] = 1;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        t++;

        for (int n : adj[cur]) {
            if (!visited[n]) {
                visited[n] = 1;
                q.push(n);
            }
        }

    }

    cout << t - 1 << endl;
}


/* this solution doesn't work as the order matters. */
/*
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, T;
    cin >> N >> T;

    set<int> infected = {1};
    int src, dst;
    while (T--) {
        cin >> src >> dst;
        if (infected.find(src) != infected.end()) infected.insert(dst);
        if (infected.find(dst) != infected.end()) infected.insert(dst);
    }

    cout << infected.size() - 1 << endl;
}
*/