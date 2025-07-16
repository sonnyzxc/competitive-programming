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
  int x;
  vi ans = {1, 1, 2, 2, 2, 8};
  for (int i = 0; i < 6; i++) {
    cin >> x;
    cout << ans[i] - x << " ";
  }
  cout << nl;
}
