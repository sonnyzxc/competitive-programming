#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define ff first
#define ss second
#define vi vector<int>
#define endl "\n"

int main() {
    string N, R;
    while (1) {
        cin >> N;
        if (N == "0") break;

        R = N;
        reverse(N.begin(), N.end());

        cout << ((N == R) ? "yes" : "no") << endl;
    }

}
