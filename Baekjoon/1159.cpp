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

    int N;
    cin >> N;
    string S;
    unordered_map<char, int> m;
    while (N--) {
        cin >> S;
        m[S[0]]++;
    }

    string ans = "";
    for (auto &[f, s] : m) {
        if (s >= 5) ans += f;
    }
    sort(ans.begin(), ans.end());

    cout << (ans.size() ? ans : "PREDAJA") << endl;
}
