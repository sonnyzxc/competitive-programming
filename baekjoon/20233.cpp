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

    int a, x, b, y, T;
    cin >> a >> x >> b >> y >> T;
    cout << a + 21 * (T > 30 ? (T - 30) * x : 0)
         << " "
         << b + 21 * (T > 45 ? (T - 45) * y : 0)
         << endl;
}
