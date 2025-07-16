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

    vi board(101, 0);
    for (int i = 0, start, end; i < N + M; i++) {
        cin >> start >> end;
        board[start] = end;
    }

    vi turn(101, -1);
    queue<int> q; // pos
    q.push(1);
    turn[1] = 0;

    while (!q.empty()) {
        int pos = q.front();
        int t = turn[pos];
        q.pop();

        for (int i = 1; i <= 6; i++) {
            int nPos = pos + i;
            if (nPos <= 100) {
                int index = !board[nPos] ? nPos : board[nPos];
                if (turn[index] == -1) {
                    turn[index] = t + 1;
                    q.push(index);
                }
            }
        }

    }

    cout << turn[100] << endl;
}
