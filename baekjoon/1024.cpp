#include <bits/stdc++.h>
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

    int N, L;
    cin >> N >> L;
    /*
        N = a + (a+1) + (a+2) + ... + (a+k)
          = a(k) + k(k-1)/2
        =>
        a = (N - k(k-1)/2)/k
    */
    for (int k = L; k <= 100; k++) {
        int t = k*(k-1)/2;
        int a = (N - t)/k;
        if (((N-t) % k == 0) && (a >= 0)) {
            for (int i = 0; i < k; i++) {
                cout << a + i << " ";
            }
            cout << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
