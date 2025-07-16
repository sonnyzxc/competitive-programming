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

    unordered_map<int, int> s;
    int N;
    cin >> N;
    vi l(N);
    double T = 0;
    for (int i = 0; i < N; i++) {
        cin >> l[i];
        T += l[i];
        s[l[i]]++;
    }

    sort(l.begin(), l.end());

    int mode = l[0];
    int max_freq = s[mode];
    
    for (auto &x : s) {
        if (x.ss > max_freq) {
            mode = x.ff;
            max_freq = x.ss;
        }
    }

    vi modes;
    for (const auto &x : s) {
        if (x.ss == max_freq) {
            modes.push_back(x.ff);
        }
    }

    sort(modes.begin(), modes.end());

    int secondSmallestMode = (modes.size() > 1) ? modes[1] : modes[0];
    int mean = round(T / N);
    
    cout << mean << endl
         << l[(N - 1) / 2] << endl
         << secondSmallestMode << endl
         << l[N - 1] - l[0] << endl;
}
