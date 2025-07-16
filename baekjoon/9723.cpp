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

    int N, A, B ,C;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> A >> B >> C;
        int M = max(A, max(B, C));
        int S = min(A, min(B, C));
        int O = A + B + C - M - S;
        cout << "Case #" << i << ": " << ((M*M - S*S - O*O) ? "NO" : "YES") << endl;
    }
}
