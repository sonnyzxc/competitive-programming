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

    // NESW
    int dir = 0, tmp = 0, cur_max = 1;
    pii ans = {0, 0};

    for (int i = 0; i < N; i++) {
        switch (dir) {
            case 0: ans.ss++; break;
            case 1: ans.ff++; break;
            case 2: ans.ss--; break;
            case 3: ans.ff--; break;
        }

        if (++tmp == cur_max) {
            dir = (dir + 1) % 4;
            tmp = 0;
            if (!(dir % 2)) cur_max++;
        }
    }

    cout << ans.ff << " " << ans.ss << endl;
}
