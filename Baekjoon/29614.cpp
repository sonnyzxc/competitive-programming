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
    string S;
    cin >> S;
    unordered_map<char, double> grade = {
        {'A', 4.0},
        {'B', 3.0},
        {'C', 2.0},
        {'D', 1.0},
        {'F', 0}
    };

    double T = 0;
    int N = 0;

    for (auto &c : S) {
        if (c == '+') T += 0.5;
        else {
            T += grade[c];
            N++;
        }
    }

    cout << T / N << endl;
}
