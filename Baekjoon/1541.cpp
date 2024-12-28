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

    string S, num = "";
    cin >> S;
    // if (S[0] != '-') {
    //     S.insert(0, 1, '+');
    // }

    stack<int> s;
    s.push(0);
    bool add = 1;

    for (auto &c : S) {
        if (isdigit(c)) {
            num += c;
        } else if (c == '-') {
            s.push(stoi(num));
            int sec = s.top();
            s.pop();
            int fir = s.top();
            s.pop();

            if (add) {
                s.push(fir + sec);
            } else {
                s.push(fir - sec);
            }
            add = 0;
            num = "";
        } else if (c == '+') {
            s.push(stoi(num));
            int sec = s.top();
            s.pop();
            int fir = s.top();
            s.pop();

            if (add) {
                s.push(fir + sec);
            } else {
                s.push(fir - sec);
            }
            add = 1;
            num = "";
        }
    }

    s.push(stoi(num));
    int sec = s.top();
    s.pop();
    int fir = s.top();
    s.pop();

    if (add) {
        s.push(fir + sec);
    } else {
        s.push(fir - sec);
    }
    cout << s.top() << endl;
}
