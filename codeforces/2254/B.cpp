#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    for (cin >> t; t--;) {
        int n;
        string s;
        cin >> n >> s;

        vector<char> f;
        vi count;
        for (int i = 0; i < n; i++) {
            if (f.empty() || s[i] != f.back()) {
                f.push_back(s[i]);
                count.push_back(1);
            } else {
                count.back()++;
            }
        }

        int k = f.size();
        int ans = k;
        for (int i = 1; i < k - 1; i++) {
            if (count[i] == 1) {
                int m = (f[i - 1] == f[i + 1]) ? 1 : 0;
                ans = min(ans, k - m - 1);
            }
        }

        cout << ans << endl;
    }
}
