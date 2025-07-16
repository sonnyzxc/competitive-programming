#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string S; int K;
    cin >> S >> K;
    vector<bool> visited((int) 'Z' + 1, 0);
    char cur = '@'; visited[cur] = 1; S += '@';
    int dist = 0;

    for (auto &c : S) {
        c = toupper(c);
        if (c == cur) dist++;
        else {
            if (!visited[cur]) {
                cout << (dist >= K) ? "1" : "0";
                visited[cur] = 1;
            }
            dist = 1;
            cur = c;
        }
    }
}
