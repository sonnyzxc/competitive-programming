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

    int H, M, delta;
    cin >> H >> M >> delta;
    cout << (H + (M + delta) / 60) % 24 << " " << (M + delta) % 60 << endl;
}
