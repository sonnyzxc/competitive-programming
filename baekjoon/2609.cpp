#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define ff first
#define ss second
#define vi vector<int>
#define endl "\n"

int GCD(int X, int Y) {
    return Y == 0 ? X : GCD(Y, X % Y);
}

int LCM(int X, int Y) {
    return X * Y / GCD(X, Y);
}

int main() {
    int A, B;
    cin >> A >> B;
    cout << GCD(A, B) << endl << LCM(A, B) << endl;
}
