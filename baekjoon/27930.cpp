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

    string S;
    cin >> S;

    string Y = "YONSEI"; string K = "KOREA";
    int iY = 0; int iK = 0;

    for (char &c : S) {
        if (c == Y[iY]) iY++;
        if (c == K[iK]) iK++;
        if (iY == 6) {
            cout << "YONSEI" << endl;
            break;
        }
        if (iK == 5) {
            cout << "KOREA" << endl;
            break;
        }
    }
}
