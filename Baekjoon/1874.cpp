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

    int N, x, next = 1;
    cin >> N;
    stack<int> s;
    vector<char> instr;
    bool cant = false;

    for (int i = 0; i < N; i++) {
        cin >> x;

        if (next <= x) {
            while (next <= x) {
                s.push(next); instr.push_back('+');
                next++;
            }
            s.pop(); instr.push_back('-');
        } else {
            if (s.top() < x) {
                cant = true;
                break;
            }

            s.pop(); instr.push_back('-');
        }
    }

    if (cant) {
        cout << "NO" << endl;
    } else {
        for (auto &x : instr) cout << x << endl;
    }
}
