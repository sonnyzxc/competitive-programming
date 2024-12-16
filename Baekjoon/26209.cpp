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
    bool normal = true;
    int B;
    for (int i = 0; i < 8; i++) {
        cin >> B;
        if (B == 9) normal = false;
    }

    cout << (normal ? 'S' : 'F') << endl;
}
