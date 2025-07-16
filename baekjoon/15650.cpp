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

int N, M;
vi c;

void comb(int start) {
    if (c.size() == M) {
        for (auto &x : c) cout << x << " ";
        cout << endl;
        return;
    }

    for (int i = start; i <= N; i++) {
        c.push_back(i);
        comb(i + 1);
        c.pop_back();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;
    comb(1);
}
