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

bool isSame(vector<vi> &arr, int x, int y, int size) {
    int col = arr[x][y];
    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y + size; j++) {
            if (arr[i][j] != col) return 0;
        }
    }

    return 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // setup
    int N;
    cin >> N;
    vector<vi> arr(N, vi(N));

    // input
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> arr[i][j];
        }
    }

    // solve
    int blue = 0, white = 0;
    queue<pair<int, pii>> points;
    points.push({N, {0, 0}});
    while (!points.empty()) {
        int units = points.front().ff;
        int x = points.front().ss.ff;
        int y = points.front().ss.ss;
        points.pop();

        if (isSame(arr, x, y, units)) {
            if (arr[x][y]) blue++;
            else white++;
        } else {
            int newUnits = units / 2;
            points.push({newUnits, {x, y}});
            points.push({newUnits, {x, y + newUnits}});
            points.push({newUnits, {x + newUnits, y}});
            points.push({newUnits, {x + newUnits, y + newUnits}});
        }
    }

    // output [white, blue]
    cout << white << endl << blue << endl;
}
