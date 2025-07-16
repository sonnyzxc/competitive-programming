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
  int n;
  cin >> n;
  switch (n) {
    case 0 ... 59: cout << "F" << nl; break;
    case 60 ... 69: cout << "D" << nl; break;
    case 70 ... 79: cout << "C" << nl; break;
    case 80 ... 89: cout << "B" << nl; break;
    case 90 ... 100: cout << "A" << nl;
  }
}
