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
    cin.ignore();
    string S;
    while (N--) {
        getline(cin, S);
        int count = 0;
        string fT = "";
        for (auto &c : S) {
            if (count >= 2) cout << c;
            else fT += c;

            if (c == ' ') count++;
        }
        cout << " " << fT << endl;
    }
}
