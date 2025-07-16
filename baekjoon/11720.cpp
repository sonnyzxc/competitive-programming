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
  int n, t = 0;
  cin >> n >> s;

  for (char &c : s) {
    t += c - '0';
  }
  cout << t << nl;
}
