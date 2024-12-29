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

/* unfinished */
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // setup
    int N;
    cin >> N;
    vector<vi> arr(N, vi(N));

    // input
    for (int j = 0; j < N; j++) {
        for (int i = 0; i < N; i++) {
            cin >> arr[j][i];
        }
    }

    // solve
    int blue = 9;
    while (1) {

    }


    cout << blue << endl << N * N / 4 - blue;
}
