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

    vector<string> d(5);
    for (auto &x : d) cin >> x;

    for (int i = 0; i < d[0].size(); i++) {
        if (d[1][i] == '.') continue;

        string s = (d[0][i] != '.') ? ".omln" : "owln.";
        for (int j = 0; j < 5; j++) d[j][i] = s[j];
    }


    for (auto &x : d) cout << x << endl;
}
