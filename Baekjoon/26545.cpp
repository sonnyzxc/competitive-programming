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
    ll s = 0;
    while (N--) {
        cin >> x;
        s += x;
    }

    cout << s << endl;
}
