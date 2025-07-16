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

    int T;
    cin >> T;
    while (T--) {
        int total;
        char op; ll n;
        bool empty = 0;
        multiset<int> ms;

        cin >> total;
        while (total--) {
            cin >> op >> n;
            if (op == 'I') {
                ms.insert(n);
            } else {
                if (n == -1 && !ms.empty()) ms.erase(ms.begin());
                else if (n == 1 && !ms.empty()) ms.erase(--ms.end());
            }
        }

        if (ms.empty()) cout << "EMPTY" << endl;
        else cout << *(--ms.end()) << " " << *ms.begin() << endl;
    }
}
