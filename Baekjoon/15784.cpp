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

    int N, X, Y;
    cin >> N >> X >> Y;

    vi res;
    int v, cmp;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> v;
            if (i == X || j == Y) {
                res.push_back(v);
            }

            if (i == X && j == Y) cmp = v;
        }
    }

    sort(res.begin(), res.end(), greater<int>());

    cout << (res[0] == cmp ? "HAPPY" : "ANGRY") << endl;
}
