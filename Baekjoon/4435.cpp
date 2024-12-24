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

    vi goodSide = {1, 2, 3, 3, 4, 10};
    vi badSide = {1, 2, 2, 2, 3, 5, 10};
    int N, x;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        int good = 0, bad = 0;
        for (int j = 0; j < 6; j++) {
            cin >> x;
            good += x * goodSide[j];
        }

        for (int k = 0; k < 7; k++) {
            cin >> x;
            bad += x * badSide[k];
        }

        cout << "Battle " << i << ": "
             << ((good > bad) ? "Good triumphs over Evil"
                           : ((good == bad) ? "No victor on this battle field"
                                           : "Evil eradicates all trace of Good"))
             << endl;
    }
}
