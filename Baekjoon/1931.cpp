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

bool endSort(pii a, pii b) {
    return (a.ss == b.ss) ? a.ff < b.ff : a.ss < b.ss;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<pii> schedule(N);
    for (auto &x : schedule) cin >> x.ff >> x.ss;
    sort(schedule.begin(), schedule.end(), endSort);

    int ans = 0, endT = 0;
    for (auto &x : schedule) {
        if (x.ff >= endT) {
            endT = x.ss;
            ans++;
        }
    }

    cout << ans << endl;
}
