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

    double px, rx;
    cin >> px >> rx;

    double vx = px / rx;
    cout << ((vx < 0.2) ? "weak"
                       : ((vx < 0.4) ? "normal"
                                    : ((vx < 0.6) ? "strong"
                                                 : "very strong")))
         << endl;
}
