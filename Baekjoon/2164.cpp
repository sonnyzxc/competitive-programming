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

    queue<int> Q;
    for (int i = 1; i <= N; i++) Q.push(i);

    while (Q.size() > 1) {
        Q.pop();
        Q.push(Q.front());
        Q.pop();
    }

    cout << Q.front() << endl;
}
