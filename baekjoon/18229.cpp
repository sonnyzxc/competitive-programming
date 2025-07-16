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

    ll N, M, K;
    cin >> N >> M >> K;

    pii ans = {102, 102};
    int v;
    for (int i = 1; i <= N; i++) {
        ll temp = 0;
        for (int j = 1; j <= M; j++) {
            cin >> v;
            temp += v;
            if (temp >= K && j < ans.ss) ans = {i, j};
        }
    }

    cout << ans.ff << " " << ans.ss << endl;
}
