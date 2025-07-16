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
  int A, B, n;
  cin >> A >> B;
  for (int i = 0; i < A; i++) {
    cin >> n;
    if (n < B) {
      cout << n << " ";
    }
  }
  cout << nl;
}
