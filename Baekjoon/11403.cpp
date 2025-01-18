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

    /*
    // get input
    int N;
    cin >> N;
    unordered_map<int, vi> adj; // could use v<vi> ? (for dense graphs)
    int x;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> x;
            if (x) {
                adj[i].push_back(j);
            }
        }
    }

    // for debugging
    // for (auto &test : adj[0]) cout << test << " ";
    // cout << endl;
    // for (auto &test : adj[1]) cout << test << " ";
    // cout << endl;
    // for (auto &test : adj[2]) cout << test << " ";

    // unleash BFS
    vector<vi> ans(N, vi(N, 0));
    for (int i = 0; i < N; i++) {
        queue<int> q;
        vi visited(N, 0);

        for (auto &n : adj[i]) {
            q.push(n);
            while (!q.empty()) {
                int k = q.front();
                q.pop();
                visited[k] = 1;
                ans[i][k] = 1;

                for (auto &next : adj[k]) {
                    if (!visited[next]) q.push(next);
                }
            }
        }
    }

    // print ans
    for (auto &x : ans) {
        for (auto &y : x) {
            cout << y << " ";
        }
        cout << endl;
    }
    */

    // Using Floyd-Warshall 
    int N;
    cin >> N;
    vector<vi> adj(N, vi(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> adj[i][j];
        }
    }
    for (int k = 0; k < N; k++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (adj[i][k] && adj[k][j]) adj[i][j] = 1;
            }
        }
    }
    for (auto &x : adj) {
        for (auto &y : x) {
            cout << y << " ";
        }
        cout  << endl;
    }

}
