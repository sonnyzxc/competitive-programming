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

    vi freq(26, 0);
    int N; char c;
    cin >> N;

    int maxF = 0; char maxC;
    while (N--) {
        cin >> c;
        freq[c - 'a']++;
        if (freq[c - 'a'] > maxF) {
            maxF = freq[c - 'a'];
            maxC = c;
        }
    }

    cout << maxC << " " << maxF << endl;
}
