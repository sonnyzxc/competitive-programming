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

    int N;
    cin >> N;

    int L = (N % 2) ? N - 1 : N;
    for (int i = 0; i < L; i++) {
        cout << ((i % 2) ? 2 : 1) << " ";
    }
    cout << ((N % 2) ? "3" : "") << endl;
}
