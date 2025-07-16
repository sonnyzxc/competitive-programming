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
    int N, v;
    string instr;
    cin >> N;
    stack<int> s;
    while (N--) {
        cin >> instr;
        if (instr == "push") {
            cin >> v;
            s.push(v);
        } else if (instr == "pop") {
            if (s.empty()) cout << -1 << endl;
            else {
                cout << s.top() << endl;
                s.pop();
            }
        } else if (instr == "size") {
            cout << s.size() << endl;
        } else if (instr == "empty") {
            cout << s.empty() << endl;
        } else if (instr == "top") {
            cout << (s.empty() ? -1 : s.top()) << endl;
        }
    }
}
