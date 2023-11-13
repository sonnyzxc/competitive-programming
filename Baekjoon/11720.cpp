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
  int n, t = 0, x;
  cin >> n >> x;

  if (x == 0) {
    cout << 0 << nl;  // Handle the case when x is initially zero
  } else {
    while (x != 0) {
      t += x % 10;
      x /= 10;
    }
    cout << t << nl;
  }
}
