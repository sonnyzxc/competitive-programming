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

    vi x(4);
    for (auto &d : x) cin >> d;

    cout << ((x[0] < x[1]
              && x[1] < x[2]
              && x[2] < x[3]) ? "Fish Rising"
                              : ((x[0] > x[1]
                                 && x[1] > x[2]
                                 && x[2] > x[3]) ? "Fish Diving"
                                                 : ((x[0] == x[1]
                                                     && x[1] == x[2]
                                                     && x[2] == x[3]) ? "Fish At Constant Depth"
                                                                      : "No Fish")))
         << endl;
}
