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

int rpsPoints(char me, char enemy) {
    if (me == enemy) return 1;

    map<pair<char, char>, int> r = {
        {{'R', 'S'}, 2}, {{'P', 'R'}, 2}, {{'S', 'P'}, 2},
        {{'S', 'R'}, 0}, {{'R', 'P'}, 0}, {{'P', 'S'}, 0}
    };

    return r[{me, enemy}];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string Sang;
    int R, N;
    cin >> R >> Sang >> N;
    vector<string> friends(N);

    int T = 0, maxScore = 0;
    for (auto &x : friends) {
        cin >> x;
        for (int i = 0; i < R; i++) {
            T += rpsPoints(Sang[i], x[i]);
        }
    }

    for (int j = 0; j < R; j++) {
        vi m = {0, 0, 0};
        for (int i = 0; i < N; i++) {
            m[0] += rpsPoints('R', friends[i][j]);
            m[1] += rpsPoints('P', friends[i][j]);
            m[2] += rpsPoints('S', friends[i][j]);
        }
        maxScore += max(m[0], max(m[1], m[2]));
    }

    cout << T << endl << maxScore << endl;
}
