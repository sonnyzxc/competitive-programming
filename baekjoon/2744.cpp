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
  cin >> s;
  for (char &c : s)
    cout << (char)(isupper(c) ? tolower(c) : toupper(c));
  cout << nl;
}
