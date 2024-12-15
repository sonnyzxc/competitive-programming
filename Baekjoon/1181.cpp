#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define ff first
#define ss second
#define vi vector<int>
#define endl "\n"

bool strLength(string a, string b) {
    return (a.length() == b.length()) ? a < b : a.length() < b.length();
}

int main() {
    int N;
    cin >> N;
    vector<string> words(N);
    for (auto &s : words) cin >> s;

    sort(words.begin(), words.end(), strLength);
    /* unique removes consecutive duplicate elements
       but does not shrink the vector, so need to 
       call .erase(). */
    auto last = unique(words.begin(), words.end());
    words.erase(last, words.end());

    for (auto &x : words) cout << x << endl;
}
