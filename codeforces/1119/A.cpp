#include<bits/stdc++.h>
using namespace std;
 
#define nl "\n"
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t, n, k;
    string s;
    cin >> t;
    while (t--) {
        cin >> n >> k >> s;
        int ans = 0;
        for (int i = 0; i < n / k; i++) {
            bool f = 0;
            for (int j = i * k; j < i * k + k; j++) {
                if (s[j] == '0') {
                    f = 1;
                    break;
                }
            }
            ans += !f;
        }
        cout << ans << nl;
    }
}

