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

    int T;
    cin >> T;
    while (T--) {
        bool f = 0;
        int M, N, x, y;
        cin >> M >> N >> x >> y;

        while (x <= (M * N)) {
            if (!((x - y) % N)) {
                cout << x << endl;
                f = 1;
                break;
            }
            x += M;
        }
        if (!f) cout << -1 << endl;

        // WA
        /*
        int f = 1, s = 1, year = 1;
        while (1) {
            if (f == M && s == N) {
                cout << -1 << endl;
                break;
            }
            if (f == x && s == y) {
                cout << year << endl;
                break;
            }

            f = (f >= M) ? 1 : f + 1;
            s = (s >= N) ? 1 : s + 1;
            year++;
        }
        */
    }
}

/*
M = 10, N = 12
1: <1:1>
2: <2:2>
3: <3:3>
...
9: <9:9>
10: <1:10>
11: <2:11>
12: <3:1>
13: <4:2>
60: <10:12>

3
10 12 3 9
10 12 7 2
13 11 5 6

Your program is to read from standard input. The input consists of T test cases. The number of test cases T is given in the first line of the input. Each test case consists of a single line containing four integers M, N, x, and y (1 ≤ M,N ≤ 40 000, 1 ≤ x ≤ M, 1 ≤ y ≤ N), where <M:N> is the last year of the world in the Cain Calendar.
*/