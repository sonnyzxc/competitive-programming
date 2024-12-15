#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define ff first
#define ss second
#define vi vector<int>
#define endl "\n"

bool isDigit(string t) {
    return (t != "Fizz") && (t != "Buzz") && (t != "FizzBuzz");
}

string compute(string t, int alpha) {
    ll val = stoi(t) + alpha;
    if ((val % 3 == 0) && (val % 5 == 0)) return "FizzBuzz";
    if (val % 3 == 0) return "Fizz";
    if (val % 5 == 0) return "Buzz";
    return to_string(val);
}

int main() {
    string F, S, T, ans;
    cin >> F >> S >> T;
    if (isDigit(F)) ans = compute(F, 3);
    else if (isDigit(S)) ans = compute(S, 2);
    else if (isDigit(T)) ans = compute(T, 1);

    cout << ans << endl;
}
