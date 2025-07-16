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

int solve(int N, int r, int c) {
    if (!N) return 0;

    int size = 1 << (N - 1);
    int area = size * size;

    if (r < size && c < size) {
        return solve(N - 1, r, c);
    } else if (r < size && c >= size) {
        return area + solve(N - 1, r, c - size);
    } else if (r >= size && c < size) {
        return 2 * area + solve(N - 1, r - size, c);
    } else {
        return 3 * area + solve(N - 1, r - size, c - size);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, r, c;
    cin >> N >> r >> c;
    cout << solve(N, r, c) << endl;
}
