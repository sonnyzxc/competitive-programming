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

    int N, x;
    cin >> N;
    vi Q(N);
    for (auto &x : Q) cin >> x;

    sort(Q.begin(), Q.end());

    int t = 0, last = 0;
    for (auto &x : Q) {
        last += x;
        t += last;
    }

    cout << t << endl;
}
