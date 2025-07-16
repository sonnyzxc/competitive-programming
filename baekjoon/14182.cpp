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

    ll S;
    cin >> S;
    while (S != 0) {
        cout << ((S <= 1000000) ? S
                                : ((S <= 5000000) ? S - S / 10
                                                  : S - S / 5))
             << endl;
        cin >> S;
    }
}
