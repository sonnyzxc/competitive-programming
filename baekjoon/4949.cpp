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

    string S;
    getline(cin, S);
    while (S != ".") {
        stack<char> stk;

        for (auto &x : S) {
            if (x == '(') {
                stk.push('(');
            } else if (x == '[') {
                stk.push('[');
            } else if (x == ')') {
                if (stk.empty()  || stk.top() == '[') {
                    cout << "no" << endl;
                    break;
                }
                stk.pop();
            } else if (x == ']') {
                if (stk.empty() || stk.top() == '(') {
                    cout << "no" << endl;
                    break;
                }
                stk.pop();
            } else if (x == '.') {
                cout << (stk.empty() ? "yes" : "no") << endl;
            }
        }
        getline(cin, S);
    }
}
