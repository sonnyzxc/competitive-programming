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
    int T;
    cin >> T;
    ll N, C;
    while (T--) {
        cin >> N >> C;
        cout << N / C + ((N % C > 0) ? 1 : 0) << endl;
    }
}
