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
    int N;
    cin >> N;
    int cnt = 1;

    while (N != 0) {
        if (to_string(cnt).find("666") != string::npos) {
            N--;
            if (N == 0) break;
        }
        cnt++;
    }

    cout << cnt << endl;
}
