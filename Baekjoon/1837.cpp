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

    string K;
    int L;
    cin >> K >> L;

    vector<bool> prime(L, true);
    prime[0] = 0;
    prime[1] = 0;

    for (int i = 2; i < L / 2; i++) {
        if (prime[i]) {
            for (int j = 2 * i; j < L; j += i) {
                if (prime[j]) prime[j] = 0;
            }
        }
    }

    for (int i = 2; i < L; i++) {
        int temp = 0;
        if (prime[i]) {
            for (int j = 0; j < K.size(); j++) {
                temp = (temp * 10 + K[j] - '0') % i;
            }

            if (temp == 0) {
                cout << "BAD " << i << endl;
                return 0;
            }
        }
    }

    cout << "GOOD" << endl;
}

// the solution below doesn't work :( (because P <= 10^100)
/*
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll K, L;
    cin >> K >> L;
    for (ll i = 2; i < L; i++) {
        if (K % i == 0) {
            cout << "BAD " << i << endl;
            return 0;
        }
    }
    cout << "GOOD" << endl;
}
*/
