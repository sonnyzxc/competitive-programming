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
  int f, y;
  cin >> f;
  bool a = true, d = true;
  for (int i = 0; i < 7; i++) {
    cin >> y;
    if (y > f) {
      d = false;
    } else if (y < f) {
      a = false;
    }
    f = y;
  }
  cout << (a == d ? "mixed" : (a && !d ? "ascending" : "descending")) << nl;
}
