#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s, fn = 1;
    while (cin >> s && s != 0) {
        cout << "File #" << fn++ << endl
             << "John needs " << ceil(ceil(round(round(s / 2.0) * 1.5) / 62) / 30000) << " floppies." << endl
             << endl;;
    }
}
