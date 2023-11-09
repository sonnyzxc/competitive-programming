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
  int a, maxN = 0, idx = 0;
  for (int i = 0; i < 9; i++) {
    cin >> a;
    if (a > maxN) {
      maxN = a;
      idx = i + 1;
    }
  }
  cout << maxN << nl << idx << nl;
}
