#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define nl "\n";
#define vi vector<int>
#define pii pair<int, int>
#define ff first
#define ss second

int main() {
  int n;
  cin >> n;

  for (int i = 1; i <= 9; i++) {
    cout << n << " * " << i << " = " << n*i << nl;
  }
}
