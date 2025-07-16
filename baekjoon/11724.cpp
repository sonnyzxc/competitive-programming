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

    vector<bool> visited(N + 1, 0);
    unordered_map<int, vi> m;
    while (M--) {
        int src, dst;
        cin >> src >> dst;
        m[src].push_back(dst);
        m[dst].push_back(src);
    }

    int comp = 0;
    for (int i = 1; i <= N; i++) {
        if (visited[i]) continue;

        queue<int> q;
        q.push(i);
        comp++;

        while (!q.empty()) {
            int k = q.front();
            q.pop();

            if (!visited[k]) {
                visited[k] = 1;
                for (auto &x : m[k]) q.push(x);
            }
        }
    }

    cout << comp << endl;
}
