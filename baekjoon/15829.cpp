#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define ff first
#define ss second
#define vi vector<int>
#define endl "\n"

int main() {
    int L; string p;
    cin >> L >> p;

    ll H = 0, power = 1;
    int base = 31, mod = 1234567891;
    for (int i = 0; i < L; ++i) {
        H = (H + (p[i] - '`') * power) % mod;
        power = (power * base) % mod;
    }
    cout << H << endl;
}
