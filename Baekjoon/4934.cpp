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

    int D;
    cin >> D;

    int H1, H2, M1, M2, S1, S2, U1, U2;
    double R;
    for (int i = 1; i <= D; i++) {
        cin >> H1 >> M1 >> S1 >> U1;
        cin >> H2 >> M2 >> S2 >> U2;
        cin >> R;

        double d1 = (H1 * 30) + (M1/2.0) + (S1/120.0) + (U1/12000.0);
        double d2 = (H2 * 30) + (M2/2.0) + (S2/120.0) + (U2/12000.0);
        double area = M_PI * R * R * ((d2 < d1 ? 360 : 0) + d2 - d1)/360.0;
        cout << i << ". " << setprecision(3) << fixed << area << endl;
    }
}
