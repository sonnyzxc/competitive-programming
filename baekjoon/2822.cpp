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

    vi score(8);
    unordered_map<int, int> idx;
    for (int i = 0; i < 8; i++) {
        cin >> score[i];
        idx[score[i]] = i + 1;
    }

    sort(score.begin(), score.end(), greater<int>());
    cout << score[0] + score[1] + score[2] + score[3] + score[4] << endl;
    vi ans;
    for (int i = 4; i >= 0; i--) ans.push_back(idx[score[i]]);
    sort(ans.begin(), ans.end());
    for (auto &x : ans) cout << x << " ";
    cout << endl;
}
