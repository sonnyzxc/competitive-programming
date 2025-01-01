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
  int A, B;
  cin >> A >> B;
  while (A != 0 && B != 0) {
    cout << (A > B ? "Yes" : "No") << nl;
    cin >> A >> B;
  }
}
