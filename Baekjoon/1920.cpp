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

/* Solution via Binary Search. */
int binarySearch(int x, int N, const vi &Li) {
    int L = 0, R = N - 1;
    int mid;
    while (L <= R) {
        // int mid = L + (R - L) / 2; // prevent overflow (remembered from Kattis?)
        mid = (L + R) / 2;
        if (Li[mid] == x) return 1;
        if (Li[mid] < x) L = mid + 1;
        else R = mid - 1;
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vi Li(N);
    for (auto &x : Li) cin >> x;

    sort(Li.begin(), Li.end());

    int M, Mi;
    cin >> M;
    while (M--) {
        cin >> Mi;
        cout << binarySearch(Mi, N, Li) << endl;
    }
}

/* Previous implementation using unorederd_set. TLE'd. */
// int main() {
//     ll N, Ai, M, Mi;
//     unordered_set<int> A;
//     cin >> N;
//     while (N--) {
//         cin >> Ai;
//         A.insert(Ai);
//     }
//     cin >> M;
//     for (ll i = 0; i < M; i++) {
//         cin >> Mi;
//         cout << ((A.find(Mi) == A.end()) ? 0 : 1) << endl;
//     }
// }
