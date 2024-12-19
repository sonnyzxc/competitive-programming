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

string solve(string S) {
    stack<char> stk;
    for (auto &x : S) {
        if (x == '(') stk.push(x);
        else {
            if (stk.empty()) {
                return("NO");
            }
            stk.pop();
        }
    }
    return stk.empty() ? "YES" : "NO";
}

int main() {
    int N;
    cin >> N;
    string S;

    while (N--) {
        cin >> S;
        cout << solve(S) << endl;
    }
}
