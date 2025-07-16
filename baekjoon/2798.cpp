#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> r(N);
    for (auto &x : r) cin >> x;

    // sort(r.begin(), r.end());
    // int maxV = accumulate(r.begin(), r.begin() + 3, 0);
    // if ((N == 3) || (maxV == M)) {
    //     cout << maxV << "\n";
    //     return 0;
    // }

    /* i think you can use 3-pointers for this? */
    // for (int i = 3; i < N; i++) {
    //     temp = r[i] - r[i-3];
    //     if (maxV + temp > M) break;
    //     maxV += temp;
    // }
    // cout << maxV << "\n";

    /* but, here is a more brute-force(y) approach. */
    int maxV = 0, temp;
    for (int i = 0; i < N - 2; i++) {
        for (int j = i+1; j < N - 1; j++) {
            for (int k = j+1; k < N; k++) {
                temp = r[i] + r[j] + r[k];
                if (temp <= M) maxV = max(maxV, temp);
            }
        }
    }
    cout << maxV << endl;
}
