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
  vi i(26, -1);
  cin >> s;
  for (int j = 0; j < (int) s.size(); j++) {
    char c = s[j];
    if (i[c - 'a'] == -1) {
      i[c - 'a'] = j;
    }
  }

  for (auto &x : i) {
    cout << x << " ";
  }
}
