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
    int N, M;
    cin >> N >> M;

    vector<string> board(N);
    for (int i = 0; i < N; i++) cin >> board[i];
    int minC = 64;
    int tempB, tempW;
    char cur;
    bool curEven;

    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {
            tempB = 0; tempW = 0;

            for (int x = 0; x < 8; x++) {
                for (int y = 0; y < 8; y++) {
                    cur = board[i + x][j + y];
                    curEven = (x + y) % 2 == 0;

                    tempW += curEven ? (cur != 'W') : (cur != 'B');
                    tempB += curEven ? (cur != 'B') : (cur != 'W'); 
                }
            }

            minC = min(minC, min(tempW, tempB));
        }
    }

    cout << minC << endl;
}
