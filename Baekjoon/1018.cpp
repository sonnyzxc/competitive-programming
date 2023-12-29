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
  string s;
  int A, B, b = 0, w = 0;
  cin >> A >> B;
  for (int i = 0; i < A; i++) {
    cin >> s;
    for (char &c : s) {
      b += c == 'B';
      w += c == 'W';
    }
  }

  cout << abs(b - w) << nl;
}
