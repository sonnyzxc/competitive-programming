#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    while (1) {
       cin >> a >> b >> c;
       if ((a+b+c)==0) break;
       
       int A = min(a, min(b, c));
       int C = max(a, max(b, c));
       int B = a + b + c - A - C;
       cout << (((A*A + B*B - C*C) == 0) ? "right" : "wrong") << "\n";
    }
}
