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

    int N, K;
    cin >> N >> K;

    vi l(N + 1);
    for (int i = 1; i <= N; i++) cin >> l[i];

    int swaps = 0;

    for (int i = N; i > 0; i--) {
        int maxV = -1, maxI = 0;
        for (int j = 1; j <= i; j++) {
            if (l[j] > maxV) {
                maxV = l[j];
                maxI = j;
            }
        }

        if (maxI != i) {
            l[maxI] = l[i];
            l[i] = maxV;
            swaps++;

            if (swaps == K) {
                for (int z = 1; z <= N; z++) cout << l[z] << " ";
                cout << endl;
                return 0;
            }
        }
    }

    cout << -1 << endl;
}
