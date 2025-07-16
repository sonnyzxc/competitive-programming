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

struct compare {
    bool operator()(pii &a, pii &b) {
        if (a.ff == b.ff) return a.ss > b.ss;
        return a.ff > b.ff;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    priority_queue<pii, vector<pii>, compare> pq;
    while (N--) {
        int x;
        cin >> x;
        if (x == 0) {
            if (pq.empty()) {
                cout << 0 << endl;
            } else {
                cout << pq.top().ss << endl;
                pq.pop();
            }
        } else {
            pq.push({abs(x), x});
        }
    }
}
