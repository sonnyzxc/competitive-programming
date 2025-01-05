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

    string exp;
    cin >> exp;

    stringstream ss(exp);
    string term;
    vector<string> segments;

    while (getline(ss, term, '-')) segments.push_back(term);

    int ans = 0;

    stringstream f(segments[0]);
    string n;
    while (getline(f, n, '+')) ans += stoi(n);

    segments.erase(segments.begin());
    for (auto &c : segments) {
        int temp = 0;
        stringstream cur(c);
        while (getline(cur, n, '+')) temp += stoi(n);

        ans -= temp;
    }

    cout << ans << endl;
}
