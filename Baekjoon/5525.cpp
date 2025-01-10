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

    int N, M; string S;
    cin >> N >> M >> S;

    int ans = 0;
    for (int i = 0; i < M; i++) {
        if (S[i] == 'O') continue;

        int sub = 0;
        while (S[i + 1] == 'O' && S[i + 2] == 'I') {
            sub++;
            if (sub == N) {
                ans++;
                sub--;
            }

            i += 2;
        }
    }

    cout << ans << endl;



    /* TLE Solution
    int pL = P.length();
    int ans = 0;
    for (int i = 0; i <= M - pL; i++) {
        if (S.substr(i, pL) == P) ans++;
    }

    cout << ans << endl;
    */
}
