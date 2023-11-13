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
  int n, t, temp;
  cin >> n;

  string s;
  for (int i = 0; i < n; i++) {
    t = 0, temp = 0;
    cin >> s;
    for (char &c : s) {
      if (c == 'O') {
        t += ++temp;
      } else {
        temp = 0;
      }
    }
    cout << t << nl;
  }
}
