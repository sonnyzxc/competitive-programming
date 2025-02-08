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
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) cout << " ";
        for (int j = 0; j < 2 * (N - i) - 1; j++) cout << "*";
        cout << endl;
    }
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 2; j++) cout << " ";
        for (int j = 0; j < 2 * (i + 1) + 1; j++) cout << "*";
        cout << endl;
    }
}
