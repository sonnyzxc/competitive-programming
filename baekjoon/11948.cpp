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

int calc(int n) {
    int x, t = 0, temp = INT16_MAX;
    for (int i = 0; i < n; i++) {
        cin >> x;
        t += x;
        temp = min(temp, x);
    }
    t -= temp;
    return t;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << calc(4) + calc(2) << endl;
}
