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
    int N, x;
    cin >> N;

    stack<int> s;
    while (N--) {
       cin >> x;
       if (x == 0) s.pop();
       else s.push(x); 
    }

    int t = 0;
    while (!s.empty()) {
        t += s.top();
        s.pop();
    }

    cout << t << endl;
}
