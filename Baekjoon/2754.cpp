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
  string g;
  cin >> g;
  cout << fixed << setprecision(1) <<
          ((4 - (g[0] - 'A'))
          + (g[1] == '+' ? 0.3 : (g[1] == '-' ? -0.3 : 0))
          + (g[0] == 'F' ? 1 : 0))
       << nl;
}
