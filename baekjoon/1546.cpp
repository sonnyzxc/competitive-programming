#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, S; double t = 0.0; vector<int> results;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> S;
        results.push_back(S);
    }
    
    double M = *max_element(results.begin(), results.end());
    
    for (auto S : results) {
        t += S / M * 100;
    }
    cout << t / N << "\n";
}
