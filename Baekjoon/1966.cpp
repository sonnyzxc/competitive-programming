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

    int T, N, M, x, c;
    cin >> T;
    while (T--) {
        cin >> N >> M;
        queue<pii> q;
        priority_queue<int> pq;

        for (int i = 0; i < N; i++) {
            cin >> x;
            q.push({i, x});
            pq.push(x);
        }

        c = 0;
        while (!q.empty()) {
            int i = q.front().ff, v = q.front().ss;
            q.pop();

            if (pq.top() == v) {
                pq.pop();
                c++;
                if (i == M) {
                    cout << c << endl;
                    break; 
                }
            } else q.push({i, v});
        }
    }
}
