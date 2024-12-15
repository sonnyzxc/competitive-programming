#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define ff first
#define ss second
#define vi vector<int>
#define endl "\n"

int fac(int X) {
    int v = 1;
    for (int i = 1; i <= X; i++) {
        v *= i;
    }
    return v;
}

int main() {
    int N, K;
    cin >> N >> K;
    cout << fac(N)/(fac(K) * fac(N-K)) << endl;
}
