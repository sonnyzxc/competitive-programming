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

    string S;
    cin >> S;
    int a = 0, b = 0;
    vector<bool> vowels(26, 0);
    vowels['a' - 'a'] = 1; vowels['e' - 'a'] = 1; vowels['i' - 'a'] = 1;
    vowels['o' - 'a'] = 1; vowels['u' - 'a'] = 1;
    for (auto &c : S) {
        if (vowels[c - 'a']) a++;
        if (c == 'y') b++;
    }

    cout << a << " " << a + b << endl;
}
