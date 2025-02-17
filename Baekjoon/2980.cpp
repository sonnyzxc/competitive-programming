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

    int N, L;
    cin >> N >> L;

    int D, R, G, t = 0, cur = 0;
    while (N--) {
        cin >> D >> R >> G;
        t += (D - cur);

        int lightT = t % (R + G);
        t += (lightT < R ? (R - lightT) : 0);
        cur = D;
    }

    t += (L - cur);

    cout << t << endl;
}
