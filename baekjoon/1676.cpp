#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define ff first
#define ss second
#define vi vector<int>
#define endl "\n"

/* Number of Trailing Zeros. */
int solve(int X) {
    int val = X / 5;
    int sum = 0;
    while (val != 0) {
        sum += val;
        val /= 5;
    }
    return sum;
}

int main() {
    int N, t = 0;
    cin >> N;
    cout << solve(N) << endl;
}

/*
(20) * 19 * 18 * 17 * 16 * (15) * 14 * 13 * 12 * 11
(10) * 9 * 8 * 7 * 6 * (5) * 4 * 3 * 2 * 1
*/