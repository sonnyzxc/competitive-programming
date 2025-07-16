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

/* DoubleFree error. :( */
// int main() {
//     int N, K;
//     cin >> N >> K;
//     vi ls;
//     for (int i = 1; i <= N; i++) {
//         ls.push_back(i);
//     }
// 
//     cout << "<";
//     int index = (K % N) - 1;
//     while (!ls.empty()) {
//         cout << ls[index];
//         ls.erase(ls.begin() + index);
//         if (ls.empty()) break;
//         index = (index + (K - 1)) % ls.size();
//         cout << ", ";
//     }
//     cout << ">" << endl;
// }

int main() {
    int N, K;
    cin >> N >> K;
    queue<int> q;
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

    int c = 1, temp;
    cout << "<";
    while (!q.empty()) {
        if (c % K == 0) {
            cout << q.front();
            q.pop();
            cout << (q.empty() ? ">\n" : ", ");
        } else {
            temp = q.front();
            q.pop();
            q.push(temp);
        }
        c++;
    }
}
