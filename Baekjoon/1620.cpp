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

    int N, M;
    cin >> N >> M;
    unordered_map<string, int> P;
    vector<string> PV(N + 1);

    for (int i = 1; i <= N; i++) {
        string pokemon;
        cin >> pokemon;
        P[pokemon] = i;
        PV[i] = pokemon;
    }

    while (M--) {
        string test;
        cin >> test;
        cout << (isdigit(test[0])
                   ? PV[stoi(test)]
                   : to_string(P[test]))
             << endl;
    }
}
