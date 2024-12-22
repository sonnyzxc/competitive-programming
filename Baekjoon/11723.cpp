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

    /* This implementation TLE'd. */
    // unordered_set<int> s;

    vi s(20, 0);

    string instr;
    int M, val;
    cin >> M;
    while (M--) {
        cin >> instr;
        if (instr == "add") {
            cin >> val;
            // s.insert(val);
            s[val - 1] = 1;
        } else if (instr == "remove") {
            cin >> val;
            // s.erase(val);
            s[val - 1] = 0;
        } else if (instr == "check") {
            cin >> val;
            // cout << ((s.find(val) != s.end()) ? 1 : 0) << endl;
            cout << s[val - 1] << endl;
        } else if (instr == "toggle") {
            cin >> val;
            // if (s.find(val) != s.end()) s.erase(val);
            // else s.insert(val);
            s[val - 1] = !s[val - 1];
        } else if (instr == "all") {
            // s.clear();
            for (int i = 1; i <= 20; i++) {
                // s.insert(i);
                s[i - 1] = 1;
            }
        } else if (instr == "empty") {
            // s.clear(); 
            for (int i = 0; i < 20; i++) s[i] = 0;
        }
    }
}
