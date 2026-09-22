#include<bits/stdc++.h>
using namespace std;

#define nl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, a1, a2, a3;
    cin >> t;
    while (t--) {
        cin >> n >> a1 >> a2 >> a3;
        cout << max({n - a1, n - a2, n - a3, 0}) << nl;
    }
}
