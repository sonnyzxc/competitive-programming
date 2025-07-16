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

bool newSort(string &a, string &b) {
    int lA = a.size(), lB = b.size();
    int mL = min(lA, lB);

    for (int i = 0; i < mL; i++) {
        if (a[i] != b[i]) {
            if (a[i] == '-') return 0;
            if (b[i] == '-') return 1;
            return tolower(a[i]) != tolower(b[i])
                   ? tolower(a[i]) < tolower(b[i])
                   : a[i] < b[i];
        }
    }

    return lA < lB;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, n;
    cin >> T;
    while (T--) {
        cin >> n;
        vector<string> l(n);
        for (auto &x : l) cin >> x;
        sort(l.begin(), l.end(), newSort);
        for (auto &x : l) cout << x << endl;
    }
}
