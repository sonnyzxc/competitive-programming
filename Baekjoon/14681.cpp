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
    int X, Y;
    cin >> X >> Y;
    cout << ((X > 0) ? ((Y > 0) ? 1 : 4) : ((Y > 0) ? 2 : 3)) << endl;
}
