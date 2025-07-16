#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define ff first
#define ss second
#define vi vector<int>
#define endl "\n"

/* Constaints: 1 <= N <= 10^5.
   Hence, aim for O(nlogn) <=> sort(). */
int main() {
    int N;
    cin >> N;
    vi v(N);
    for (auto &x : v) cin >> x;
    sort(v.begin(), v.end());
    for (auto &x : v) cout << x << endl;
}
