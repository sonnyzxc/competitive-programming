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

int biggestFactor(int x) {
    for (int R = x - 1; R > 0; R--) {
        if (!(x % R) && R <= x / R) return R;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string S;
    cin >> S;
    int size = S.length();
    int f = biggestFactor(size);
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < size; j += f) cout << S[i + j];
    }

    cout << endl;
}

/*
b o u d o n u i m i l  c  b  s  a  i
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15

b o m b  o n i s  u u l  a  d i c  i
0 4 8 12 1 5 9 13 2 6 10 14 3 7 11 15
=====================================
koaski => 2x3
F: 2: S: 3
k a k
o s i

k o a s k i
0 1 2 3 4 5

k a k o s i
0 2 4 1 3 5
*/