#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>

/**
 * Serves as my notes for competitive programming, and
 * a collection of helper functions.
 */

bool isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return 0;
    return 1;
}

int binarySearch(int x, int N, const vi &Li) {
    int L = 0, R = N - 1;
    int mid;
    while (L <= R) {
        // int mid = L + (R - L) / 2; // prevent overflow (remembered from Kattis?)
        mid = (L + R) / 2;
        if (Li[mid] == x) return 1;
        if (Li[mid] < x) L = mid + 1;
        else R = mid - 1;
    }
    return 0;
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

/* Recursive DFS. Can use stack for iterative method. */
void DFS(int V, unordered_map<int, vi> &m, vector<bool> &DFSvisited) {
    int cur = V;
    DFSvisited[cur] = 1;

    for (auto &x : m[cur]) {
        if (!DFSvisited[x]) DFS(x, m, DFSvisited);
    }
}