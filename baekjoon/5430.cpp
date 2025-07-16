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

vi vectorise(string &S) {
    vi res;
    stringstream ss;
    ss.str(S.substr(1, S.size() - 2));

    string temp;
    while (getline(ss, temp, ',')) {
        res.push_back(stoi(temp));
    }

    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    cin.ignore();

    while (N--) {
        bool good = 1;
        string instr, elems; int n;
        cin >> instr >> n >> elems;
        vi nums = vectorise(elems);
        deque<int> dq(nums.begin(), nums.end());
        bool r = 0;

        for (char &c : instr) {
            if (c == 'R') r = !r;
            else if (c == 'D') {
                if (dq.empty()) {
                    cout << "error" << endl;
                    good = 0;
                    break;
                }
                if (r) dq.pop_back();
                else dq.pop_front();
            }
        }

        if (good) {
            cout << "[";
            if (r) {
                for (auto it = dq.rbegin(); it != dq.rend(); ++it) {
                    cout << *it << (it + 1 != dq.rend() ? "," : "");
                }
            } else {
                for (auto it = dq.begin(); it != dq.end(); ++it) {
                    cout << *it << (it + 1 != dq.end() ? "," : "");
                }
            }
            cout << "]" << endl;
        }
    }
}
