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

    int N, M;
    ll B;
    cin >> N >> M >> B;

    vector<vi> arr(N + 1, vi(M + 1, 0));
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cin >> arr[i][j];
        }
    }

    ll minTime = LLONG_MAX;
    ll finalHeight = 0;

    for (int h = 0; h <= 256; h++) {
        int remove = 0; // 2 sec
        int blocksNeeded = 0; // 1 sec
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= M; j++) {
                int cur = arr[i][j];
                if (cur > h) {
                    remove += cur - h;
                } else {
                    blocksNeeded += h - cur;
                }
            }
        }

        if (blocksNeeded - remove <= B) {
            ll curTime = 2 * remove + blocksNeeded;
            if (curTime < minTime || (curTime == minTime && h > finalHeight)) {
                minTime = curTime;
                finalHeight = h;
            }
        }
    }

    cout << minTime << " " << finalHeight << endl;
}
