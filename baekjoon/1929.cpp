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

bool isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) 
        if (num % i == 0) return 0;
    return 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int M, N;
    cin >> M >> N;
    for (int i = M; i <= N; i++) {
        if (isPrime(i)) cout << i << endl;
    }
}
