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

// UNFINISHED

int main() {
    string A, B, R = "";
    cin >> A >> B;

    bool ANeg = A[0] == '-';
    bool BNeg = B[0] == '-';

    if ((!ANeg && !BNeg) || (ANeg && BNeg)) {
        if (ANeg) {
            A.erase(0, 1);
            B.erase(0, 1); 
        }

        int L = max(A.size(), B.size());
        int S = min(A.size(), B.size());

        reverse(A.begin(), A.end()); reverse(B.begin(), B.end());

        string LStr = (A.size() > B.size()) ? A : B;
        char x;
        bool c = false;
        for (int i = 0; i < S; i++) {
            x = A[i] + B[i] - '0';
            if (c) x++;

            if (x >= ('9' + 1)) {
                c = true;
                R.insert(0, 1, x-10);
                // cout << A[i] << " " << B[i] << " ; xC: " << x - '0' << endl;
                continue;
            }

            // cout << A[i] << " " << B[i] << " ; x: " << x << endl;
            R.insert(0, 1, x);
            c = false;
        }

        /* Deal with L = S, carry = true; 
           -> refactor potential here. */
        if ((L == S) && c) {
            R.insert(0, 1, '1');
            if (ANeg) R.insert(0, 1, '-');
            cout << R << endl;
            return 0;
        }

        /* Deal with L */
        for (int j = L - S + 1; j < L; j++) {
            x = LStr[j];
            if (c) x++;

            if (x >= ('9' + 1)) {
                c = true;
                R.insert(0, 1, x-10);
                continue;
            }

            R.insert(0, 1, x);
            c = false;
        }

        if (ANeg) R.insert(0, 1, '-');
        cout << R << endl;
    }
}
