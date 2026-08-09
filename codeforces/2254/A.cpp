#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define vi vector<int>

int main() {
  int t;
  for (cin >> t; t--;) {
    vi v(3);
    cin >> v[0] >> v[1] >> v[2];
    sort(v.begin(), v.end());
    cout << min(v[2] - v[1], v[1] - v[0]) << nl;
  }
}
