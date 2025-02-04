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

    int M, P, L, E, R, S, N;
    while (cin >> M >> P >> L >> E >> R >> S >> N) {
        while (N--) {
            int larva = M * E;
            int adult = P / S;
            int pupa = L / R;

            M = adult;
            P = pupa;
            L = larva;
        }

        cout << M << endl;
    }
}
