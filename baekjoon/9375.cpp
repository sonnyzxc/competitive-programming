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

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        unordered_map<string, int> outfit;
        while (N--) {
            string attr, cat;
            cin >> attr >> cat;
            outfit[cat]++;
        }

        ll t = 1;
        for (auto &x : outfit) t *= (x.ss + 1);
        t--;

        cout << t << endl;
    }

}
