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

    ll R, K, M;
    cin >> R >> K >> M;
    for (int i = 0; i < M / K; i++) {
        if (R < 1) {
            cout << 0 << endl;
            return 0;
        }

        R /= 2;
    }

    cout << R << endl;
}
