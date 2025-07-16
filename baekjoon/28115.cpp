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

    int N;
    cin >> N;

    vi A(N);
    int temp = INT_MAX, diff = INT_MAX;
    for (auto &x : A) cin >> x;

    for (int i = 1; i < N - 1; i++) {
        if (A[i + 1] - A[i] != A[i] - A[i - 1]) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    for (int i = 0; i < N; i++) cout << 0 << " ";
    cout << endl;

    for (auto &x : A) cout << x << " ";
    cout << endl;
}
