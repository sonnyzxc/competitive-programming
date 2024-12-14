#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define ff first
#define ss second
#define vi vector<int>
#define endl "\n"

int main() {
    int N, x;
    cin >> N;
    vi r(10001, 0);
    for (int i = 0; i < N; i++) {
        cin >> x;
        r[x] += 1;
    }
    int temp;
    for (int j = 0; j < 10001; j++) {
        temp = r[j]; 
        if (temp > 0) {
            for (int k = 0; k < temp; k++) {
                cout << j << endl;
            }
        }
    }
}
