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
  int h, m;
  cin >> h >> m;
  m -= 45;
  if (m < 0) {
    if (h == 0) {
      h = 23;
    } else {
      h -= 1;
    }
    m += 60;
  }
  cout << h << " " << m << nl;
}
