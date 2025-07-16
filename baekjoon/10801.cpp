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

    vi A(10), B(10);
    for (auto &a : A) cin >> a;
    for (auto &b : B) cin >> b;

    int scoreA = 0, scoreB = 0;
    for (int i = 0; i < 10; i++) {
        if (A[i] > B[i]) scoreA++;
        else if (B[i] > A[i]) scoreB++;
    }

    cout << (scoreA == scoreB ? 'D' : (scoreA > scoreB ? 'A' : 'B')) << endl;
}
