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

    vector<ll> P(100, 0);
    P = {1, 1, 1, 2, 2, 3};
    for (int i = 6; i < 100; i++) P[i] = P[i-1] + P[i-5];

    /* unoptimised solution, hehe. */

    int T, x;
    cin >> T;
    while (T--) {
        cin >> x;
        cout << P[x - 1] << endl;
    }
}
