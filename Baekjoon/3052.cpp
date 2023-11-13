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
  set<int> u;
  for (int i = 0; i < 10; i++) {
    cin >> n;
    u.insert(n % 42);
  }
  cout << u.size() << nl;
}
