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

    unordered_map<string, int> count;

    int N, x;
    cin >> N;

    string f;
    while (N--) {
        cin >> f >> x;
        count[f] += x;
    }

    for (auto &x : count) {
        if (x.second == 5) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}
