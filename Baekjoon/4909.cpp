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

    while (1) {
        int score, t = 0;
        int b = -1, s = 11;
        for (int i = 0; i < 6; i++) {
            cin >> score;
            t += score;
            b = max(b, score);
            s = min(s, score);
        }

        if (!t) break;
        cout << (t - b - s) / 4.0 << endl;
    }
}
