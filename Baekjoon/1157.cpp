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
  vi freq(26);
  string s;
  cin >> s;

  char m = ' ';
  int mfreq = 0;
  for (char c : s) {
    c = toupper(c);
    freq[c - 'A']++;

    if (freq[c - 'A'] > mfreq) {
      mfreq = freq[c - 'A'];
      m = c;
    } else if (freq[c - 'A'] == mfreq) {
      m = '?';
    }
  }

  cout << m << nl;
}