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

/* The solution below didn't work, so I went with python! */
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    string ID, PW;
    map<string, string> pwmanager;

    for (int i = 0; i < N; i++) {
        cin >> ID >> PW;
        pwmanager[ID] = PW;
    }
    for (int j = 0; j < M; j++) {
        cin >> ID;
        cout << pwmanager[ID] << '\n';
    }
    /*
    while (N--) {
        cin >> ID >> PW;
        pwmanager[ID] = PW;
    }
    while (M--) {
        cin >> ID;
        cout << pwmanager[ID] << '\n';
    }
    */
}
