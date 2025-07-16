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

    vi freq(11, 0);
    vi bask(N);

    for (auto &x : bask) {
        cin >> x;
        // freq[x]++;
    }

    int ans = 0;
    // vi Rfreq = freq;
    // for (int right = N - 1; right > 0; right--) {
    //     Rfreq[bask[right]]--;
    //     for (auto &x : Rfreq) cout << x << " ";
    //     cout << "C: " << count(Rfreq.begin(), Rfreq.end(), 0) << endl;
    //     int left = 1;
    //     while (count(Rfreq.begin(), Rfreq.end(), 0) > 2
    //            || left != right) {
    //         Rfreq[left++]--;
    //     }
    //     ans = max(ans, right - left + 1);
    // }


    int l = 0, r = 0;
    while (r < N) {
        freq[bask[r]]++;

        while (count(freq.begin(), freq.end(), 0) <= 8) {
            freq[bask[l++]]--;
        }

        ans = max(ans, r - l + 1);
        r++;
    }


    cout << ans << endl;
}
