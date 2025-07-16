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

    int N;
    cin >> N;

    vi line;
    int overTake;

    for (int i = 1; i <= N; i++) {
        cin >> overTake;
        line.insert(line.end() - overTake, i);
    }

    for (auto &x : line) cout << x << " ";
    cout << endl;
}

/*
My initial idea was to use a queue, and to pop overTake times.
Realised this won't work, so resulted to using vector.insert

5
0 1 1 3 2

q:
1 2       {push 2}
2 1       {op 1}
2 1 3     {push 3}
2 3 1     {op 1}
2 3 1 4   {push 4}
4 2 3 1   {op 3}
4 2 3 1 5 {push 5}
4 2 5 3 1 {op 2}

1 2 3 4 5
2 1 3 4 5
2 3 1 4 5
4 2 3 1 5
4 2 5 3 1
*/
