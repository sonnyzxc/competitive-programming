#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unordered_map<string, string> m = {
        {".OP.", "T"},
        {"I..P", "F"},
        {"O..P", "Lz"}
    };

    char d;
    vector<string> g(2);
    cin >> d >> g[0] >> g[1];
    string res = "";

    switch (d) {
        case 'N':
            res += g[1][1];
            res += g[1][0];
            res += g[0][1];
            res += g[0][0];
            break;
        case 'E':
            res += g[1][0];
            res += g[0][0];
            res += g[1][1];
            res += g[0][1];
            break;
        case 'S':
            res = g[0] + g[1];
            break;
        case 'W':
            res += g[0][1];
            res += g[1][1];
            res += g[0][0];
            res += g[1][0];
            break;
    }

    cout << (m.find(res) != m.end() ? m[res] : "?") << endl;
}
