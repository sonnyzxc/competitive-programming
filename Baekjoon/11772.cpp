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

ll power(ll a, ll b) {
    ll ret = 1;
    for (int i = 1; i <= b; i++) {
        ret *= a;
    }

    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll ans = 0;
    int N;
    string num;
    cin >> N;
    while (N--) {
        cin >> num;
        ans += power(stoull(num.substr(0, num.length() - 1)), stoi(num.substr(num.length() - 1)));
    }

    cout << ans << endl;
}
