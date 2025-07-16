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

    unordered_map<int, int> count;

    ll N;
    cin >> N;
    while (N--) {
        int card;
        cin >> card;
        count[card]++;
    }

    ll M;
    cin >> M;
    while (M--) {
        int search;
        cin >> search;
        cout << count[search] << " ";
    }
    cout << endl;
}
