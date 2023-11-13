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
  cin >> n;
  if (n % 400 == 0) {
    cout << 1 << nl;
  } else if (n % 100 == 0) {
    cout << 0 << nl;
  } else if (n % 4 == 0) {
    cout << 1 << nl;
  } else {
    cout << 0 << nl;
  }
}
