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

    int N;
    cin >> N;

    int x;
    cin >> x;
    while (x != 0) {
        cout << x << " is" << (x % N ? " NOT" : "") << " a multiple of " << N << "." << endl;
        cin >> x;
    }
}
