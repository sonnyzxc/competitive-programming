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
    double a1, p1, r1, p2;
    cin >> a1 >> p1 >> r1 >> p2;
    double Ap = a1 / p1;
    double Rp = (M_PI * r1 * r1) / p2;
    cout << ((Ap < Rp) ? "Whole pizza" : "Slice of pizza") << endl;
}
