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

pair<int, char> opD(int N) {
    return {(2 * N) % 10000, 'D'};
}

pair<int, char> opS(int N) {
    return {!N ? 9999 : N - 1, 'S'};
}

pair<int, char> opL(int N) {
    return {(N / 1000) + (N % 1000) * 10, 'L'};
}

pair<int, char> opR(int N) {
    return {(N / 10) + (N % 10) * 1000, 'R'};
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<function<pair<int, char>(int)>> ops = {opD, opS, opL, opR};

    int T;
    cin >> T;
    while (T--) {
        int A, B;
        cin >> A >> B;

        queue<pair<int, string>> q;
        vector<bool> visited(10000, 0);

        q.push({A, ""});
        visited[A] = 1;

        while (!q.empty()) {
            int cur = q.front().ff;
            string dir = q.front().ss;
            q.pop();

            if (cur == B) {
                cout << dir << endl;
                break;
            }

            for (auto &op : ops) {
                pair<int, char> next = op(cur);
                if (!visited[next.ff]) {
                    q.push({next.ff, dir + next.ss});
                    visited[next.ff] = 1;
                }
            }
        }
    }
}
