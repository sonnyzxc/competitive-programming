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
    queue<int> q;

    while (N--) {
        cin >> instr;
        if (instr == "push") {
            cin >> v;
            q.push(v);
        } else if (instr == "pop") {
            if (q.empty()) cout << -1 << endl;
            else {
                cout << q.front() << endl;
                q.pop();
            }
        } else if (instr == "size") {
            cout << q.size() << endl;
        } else if (instr == "empty") {
            cout << q.empty() << endl;
        } else if (instr == "front") {
            cout << (q.empty() ? -1 : q.front()) << endl;
        } else if (instr == "back") {
            cout << (q.empty() ? -1 : q.back()) << endl;
        }
    }
}
