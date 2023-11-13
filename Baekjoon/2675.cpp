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
  int n, m;
  cin >> n;
  string s, t;
  for (int i = 0; i < n; i++) {
    s = "";
    cin >> m >> t;
    for (char &c : t) {
      s += string(m, c);
    }
    cout << s << nl;
  }
}
