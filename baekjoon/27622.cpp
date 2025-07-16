#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    int u, ans = 0;
    vector<bool> user(1001, 0);
    while (T--) {
        cin >> u;
        if (u < 0) {
            if (!user[-u]) ans++;
            else user[-u] = 0;
        } else {
            if (user[u]) ans++;
            else user[u] = 1;
        }
    }

    cout << ans << endl;
}
