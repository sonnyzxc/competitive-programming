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
    int N;
    cin >> N;
    if (N == 0) {
        cout << 0 << endl;
        return 0;
    }

    vi ratings(N);
    for (auto &x : ratings) cin >> x;
    sort(ratings.begin(), ratings.end());

    int outlier = round(N * 0.15);
    double t = 0;
    for (int i = outlier; i < N - outlier; i++) {
        t += ratings[i];
    }
    cout << round(t / (N - outlier * 2)) << endl;
}
