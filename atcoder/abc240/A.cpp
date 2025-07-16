#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B;
    cin >> A >> B;
    cout << ((B - A == 9) || (B - A == 1) ? "Yes" : "No") << endl;
}
