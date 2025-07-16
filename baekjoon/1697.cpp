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

    int N, K;
    cin >> N >> K;

    queue<pii> q;
    q.push({N, 0});
    vector<bool> visited(100001, 0);

    while (!q.empty()) {
        int pos = q.front().ff;
        int time = q.front().ss;
        q.pop();
        visited[pos] = 1;

        if (pos == K) {
            cout << time << endl;
            return 0;
        }

        if (pos - 1 >= 0 && !visited[pos - 1])
            q.push({pos - 1, time + 1});
        if (pos + 1 <= 100001 && !visited[pos + 1])
            q.push({pos + 1, time + 1});
        if (pos * 2 <= 100001 && !visited[pos * 2])
            q.push({pos * 2, time + 1});
    }
}
