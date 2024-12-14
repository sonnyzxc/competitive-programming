#include <bits/stdc++.h>
using namespace std;

int main() {
    // L1: 1 [1]
    // L2: 2, 3, 4, 5, 6, 7 [6]
    // L3: 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 [12]
    // L4: ... [18]
    // S = 3n^2 - 3n + 1 
    int N, c = 1, n = 1;
    cin >> N;
    while (c < N) {
        c += n * 6;
        n += 1;
    }
    cout << n;
}
