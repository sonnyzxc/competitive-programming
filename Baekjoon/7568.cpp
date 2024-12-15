#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define ff first
#define ss second
#define vi vector<int>
#define endl "\n"

int main() {
    int N; // 2 <= N <= 50;
    cin >> N;
    vector<pair<int, int>> ps(N);
    for (auto &x : ps) cin >> x.ff >> x.ss;

    int r = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if ((ps[i].ff < ps[j].ff) && (ps[i].ss < ps[j].ss)) r++;
        }
        cout << r << " ";
        r = 1;
    }
    cout << endl;
}
