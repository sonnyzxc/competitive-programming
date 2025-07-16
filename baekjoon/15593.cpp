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

    vi coverage(1001, 0);
    vector<pii> shifts;
    while (N--) {
        int start, end;
        cin >> start >> end;
        shifts.push_back({start, end});
        for (int t = start; t < end; t++) {
            coverage[t]++;
        }
    }

    int total = 0;
    for (int t = 1; t <= 1000; t++) {
        if (coverage[t] > 0) total++;
    }

    int maxTime = 0;
    for (auto &[start, end] : shifts) {
        int time = 0;
        for (int i = start; i < end; i++) {
            if (coverage[i] == 1) time++;
        }
        maxTime = max(maxTime, total - time);
    }

    cout << maxTime << endl;
}
