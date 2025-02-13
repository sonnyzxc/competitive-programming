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

    int N, A, D, total;
    while (T--) {
        cin >> N >> A >> D;
        cout << N / 2.0 * (2 * A + (N - 1) * D) << endl;
    }
}
