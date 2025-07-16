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

    int A, B, N, ans = 1001;
    cin >> A >> B >> N;
    while (N--) {
        int freq;
        cin >> freq;
        ans = min(ans, abs(freq - B) + 1);
    }

    cout << min(ans, abs(A - B)) << endl;
}
