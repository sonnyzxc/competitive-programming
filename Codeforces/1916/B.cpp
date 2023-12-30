#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define nl "\n"
#define vi vector<int>
#define pii pair<int, int>
#define ff first
#define ss second

int main() {
  int n;
  for (cin >> n; n--;) {
    int a, b;
    cin >> a >> b;

    auto lcmV = lcm(a, b);
    cout << (lcmV == b ? lcmV * (b / a) : lcmV) << nl;
  }
}
