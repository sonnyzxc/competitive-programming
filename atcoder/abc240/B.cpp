#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, ans = 0;
    ll a;
    unordered_set<ll> s;
    cin >> N;
    while (N--) {
        cin >> a;
        if (s.find(a) != s.end()) continue;
        s.insert(a);
        ans++;
    }

    cout << ans << endl;
}
