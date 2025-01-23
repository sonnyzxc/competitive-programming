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

    int score = 0;
    for (int i = 0, temp; i < 5; i++) {
        cin >> temp;
        score += (temp < 40) ? 40 : temp;
    }

    cout << score / 5 << endl;
}
