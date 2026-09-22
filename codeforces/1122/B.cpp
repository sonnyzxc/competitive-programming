#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, a, b, c;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        cout << max(abs(a + c - b), abs(a - b)) << nl;
    }
}
