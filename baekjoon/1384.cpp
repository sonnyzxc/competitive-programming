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

    int group = 1;
    int T;
    cin >> T;

    while (T) {
        vector<string> names;
        vector<pii> nasty;

        string n;
        for (int i = 0; i < T; i++) {
            cin >> n;
            names.push_back(n);

            char stat;
            for (int j = 0; j < T - 1; j++) {
                cin >> stat;
                if (stat == 'N') nasty.push_back({(i - j - 1) < 0 ? i - j - 1 + T : i - j - 1, i});
            }
        }

        cout << "Group " << group << endl;
        if (nasty.empty()) {
            cout << "Nobody was nasty" << endl;
        } else {
            for (auto &[x, y] : nasty) {
                cout << names[x] << " was nasty about " << names[y] << endl;
            }
        }
        cout << endl;
        group++;
        cin >> T;
    }
}
