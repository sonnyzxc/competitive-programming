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

    string ISBN;
    cin >> ISBN;
    int am, t = 0;
    for (int i = 0; i < ISBN.length(); i++) {
        int mul = ((i % 2) ? 3 : 1);
        if (ISBN[i] == '*') {
            am = mul;
            continue;
        }

        t += (ISBN[i] - '0') * mul;
    }

    int target = (10 - (t % 10)) % 10;
    for (int i = 0; i <= 9; i++) {
        if ((am * i) % 10 == target) {
            cout << i << endl;
            break;
        }
    }
}
