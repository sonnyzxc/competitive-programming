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
  int j, H, W, N;
  string s;
  cin >> j;

  for (int i = 0; i < j; i++) {
    cin >> H >> W >> N;
    int c = (N - 1) / H;
    int mod = (N - 1) % H;
    cout << ++mod;
    cout << string(2 - to_string(++c).size(), '0');
    cout << c << nl;
  }
}
