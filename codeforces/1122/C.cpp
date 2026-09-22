#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define nl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    string s;
    cin >> t;
    while (t--) {
        cin >> n >> s;
        int z = count(s.begin(), s.end(), '0');
        if (s[0] == '1') {
            cout << z << nl;
        } else {
            int o = 0, a = 0;
            for (auto &c : s) {
                if (c == '1') o++;
                else a = min(a + 1, o);
            }
            cout << a << nl;
        }
    }
}
