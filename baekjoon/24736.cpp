#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define ff first
#define ss second
#define vi vector<int>
#define pii pair<int, int>
#define pis pair<int, string>
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vi scores = {6, 3, 2, 1, 2};
    for (int i = 0; i < 2; i++) {
        int s = 0, x;
        for (int j = 0; j < 5; j++) {
            cin >> x;
            s += scores[j] * x;
        }
        cout << s << " ";
    }
}
