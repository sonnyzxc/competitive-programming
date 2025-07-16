#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << to_string(a+b-c) << "\n"
         << to_string(stoi(to_string(a) + to_string(b)) - c);
}
