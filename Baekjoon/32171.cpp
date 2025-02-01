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

    int T;
    cin >> T;

    int A = 10, B = 10, C = -10, D = -10;
    while (T--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        A = min(a, A); B = min(b, B); C = max(c, C); D = max(d, D);
        cout << 2 * (D - B + C - A) << endl;
    }
}
