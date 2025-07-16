#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define nl "\n"
#define vi vector<int>
#define pii pair<int, int>
#define ff first
#define ss second

int max(int x, int y) { return x > y ? x : y; }
int min(int x, int y) { return x < y ? x : y; }

int main() {
  int n, x;
  cin >> n >> x;
  int maxN = x, minN = x;
  for (int i = 0; i < n - 1; i++) {
    cin >> x;
    maxN = max(maxN, x);
    minN = min(minN, x);
  }
  cout << minN << " " << maxN << nl;
}
