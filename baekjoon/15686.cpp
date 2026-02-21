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
    vector<vi> grid(N + 1);
    cin >> N;

}

void BFS(int k, int N) {
    vector<vi> adj(N + 1);
    queue<int> q;
    q.push(k);
    vector<bool> visited(N + 1, 0);
    visited[1] = k;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        for (int n : adj[cur]) {
            if (!visited[n]) {
                visited[n] = 1;
                q.push(n);
            }
        }
    }
}
}
