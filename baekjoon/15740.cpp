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

// UNFINISHED (scores 30/100)
// half way through refactoring, got lazy, and decided to go with python...

string add(string &A, string &B) {
    string R = "";

    int L = max(A.size(), B.size());
    int S = min(A.size(), B.size());

    std::reverse(A.begin(), A.end());
    std::reverse(B.begin(), B.end());

    string LStr = (A.size() > B.size()) ? A : B;
    char x;
    bool c = false;
    for (int i = 0; i < S; i++) {
        x = A[i] + B[i] - '0';
        if (c) x++;

        if (x >= ('9' + 1)) {
            c = true;
            R.insert(0, 1, x-10);
            continue;
        }

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
    for (int j = S; j < L; j++) {
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

    return R;
}

string subtract(string s1, string s2) {

}

int main() {
    string A, B;
    cin >> A >> B;

    bool ANeg = A[0] == '-';
    bool BNeg = B[0] == '-';

    if (ANeg && BNeg) {
        A.erase(0, 1);
        B.erase(0, 1);
        cout << add(A, B) << endl;
    }

    /*
    } else {
        string F = ANeg ? B : A;
        string S = ANeg ? A : B;
        S.erase(0, 1);

        bool resultNeg = false;

        if (F.size() < S.size()) {
            swap(F, S);
            resultNeg = true;
        } else if (F.size() == S.size()) {
            if (F < S) {
                swap(F, S);
                resultNeg = true;
            }
        }

        reverse(F.begin(), F.end());
        reverse(S.begin(), S.end());

        int carry = 0;
        string result = "";

        for (int i = 0; i < S.size(); i++) {
            int x = (F[i] - '0') - (S[i] - '0') - carry;
            if (x < 0) {
                x += 10;
                carry = 1;
            } else {
                carry = 0;
            }
            result.push_back(x + '0');
        }

        for (int i = S.size(); i < F.size(); i++) {
            int x = (F[i] - '0') - carry;
            if (x < 0) {
                x += 10;
                carry = 1;
            } else {
                carry = 0;
            }
            result.push_back(x + '0');
        }

        while (result.size() > 1 && result.back() == '0') {
            result.pop_back();
        }

        if (resultNeg) result.push_back('-');

        reverse(result.begin(), result.end());
        cout << result << endl;
    }
    */
}
