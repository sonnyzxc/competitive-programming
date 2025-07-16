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
    int N, t = 0;
    cin >> N;

    while (N >= 0) {
        if (N % 5 == 0) {
            t += N / 5;
            break;
        }
        N -= 3;
        t++;
    }

    cout << ((N >= 0) ? t : -1) << endl;
}
