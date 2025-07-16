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

/* not working solution */
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll N, M; string name;
//     unordered_set<string> listen;
//     unordered_set<string> seen;
//     cin >> N >> M;
//     while (N--) {
//         cin >> name;
//         listen.insert(name);
//     }

//     while (M--) {
//         cin >> name;
//         seen.insert(name);
//     }

//     vector<string> common;
//     set_intersection(name.begin(), name.end(), seen.begin(), seen.end(), back_inserter(common));
//     sort(common.begin(), common.end());
//     cout << common.size() << endl;
//     for (auto &x: common) cout << x << endl;
// }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll N, M; string name;
    unordered_set<string> listen;
    vector<string> common;
    cin >> N >> M;
    while (N--) {
        cin >> name;
        listen.insert(name);
    }

    while (M--) {
        cin >> name;
        if (listen.find(name) != listen.end()) {
            common.push_back(name);
        }
    }

    sort(common.begin(), common.end());
    cout << common.size() << endl;
    for (auto &x : common) cout << x << endl;
}
