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

    int A, B;
    while (M--) {
        cin >> B >> A;
        adj[A].push_back(B);
    }

    vi importance(N + 1);
    for (int i = 1; i <= N; i++) {
        vector<bool> visited(N + 1, 0);
        queue<int> q;
        q.push(i);
        visited[i] = 1;
        int c = 0;

        while (!q.empty()) {
            int cur = q.front();
            q.pop();
            c++;

            for (auto &n : adj[cur]) {
                if (!visited[n]) {
                    q.push(n);
                    visited[n] = 1;
                }
            }
        }

        importance[i] = c;
    }

    int v = *max_element(importance.begin(), importance.end());
    for (int i = 1; i <= N; i++) {
        if (importance[i] == v) cout << i << " ";
    }
    cout << endl;
}
