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

vector<ld> binom(int N, ld p) {
    vector<ld> prob(N+1, 0.0L);
    prob[0] = powl(1.0L - p, N);
    for (int k = 1; k <= N; k++) {
        prob[k] = prob[k-1]
            * ( (ld)(N - k + 1) / (ld)k )
            * (p / (1.0L - p));
    }
    return prob;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    ld P, Q;
    
    cin >> N >> P >> Q;
    
    auto px = binom(N, Q);
    ld ans = 0.0L;
    
    for (int k = 0; k <= N; k++) {
        auto py = binom(k, P);
        ld cur = 0.0L;
        
        for (int i = 0; i <= N; i++) {
            for (int j = 0; j <= k; j++) {
                int t = i + j;
                if (1 <= t && t <= N) {
                    cur += (ld)t * px[i] * py[j];
                }
            }
        }
        ans = max(ans, cur);
    }
    
    cout << fixed << setprecision(9) << ans << endl;
}
