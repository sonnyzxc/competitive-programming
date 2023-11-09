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
  int A;
  int T = 0;

  for (int i = 0; i < 5; i++) {
    cin >> A;
    T += pow(A, 2);
  }
  cout << T % 10 << nl;
}
