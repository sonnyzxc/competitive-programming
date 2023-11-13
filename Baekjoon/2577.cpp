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
  int A, B, C;
  cin >> A >> B >> C;

  string s = to_string(A * B * C);
  vi f(10);
  for (char &c : s) {
    f[(int)c - '0']++;
  }
  for (int &x : f) {
    cout << x << nl;
  }
}
