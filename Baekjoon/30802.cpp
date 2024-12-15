#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define ff first
#define ss second
#define vi vector<int>
#define endl "\n"

int main() {
    int N, P, minT = 0;
    double T;
    vi size(6);
    cin >> N;
    for (auto &x : size) cin >> x;
    cin >> T >> P;

    for (auto &x : size) {
        minT += ceil(x / T);
    }


    // min T
    cout << minT << endl;
    // P bundles, individual pens
    cout << N / P << " " << N % P << endl;
}
