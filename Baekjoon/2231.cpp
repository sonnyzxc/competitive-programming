#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define ff first
#define ss second
#define vi vector<int>
#define endl "\n"

int digGen(int n) {
    int sum = n;
    for (auto &c : to_string(n)) {
        sum += c - '0';
    }
    return sum;
}

int main() {
    int x, val = 0;
    cin >> x;
    for (int i = 1; i < x; i++) {
        if (digGen(i) == x) {
            val = i;
            break;
        }
    }
    cout << val << endl;
}
