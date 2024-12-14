#include <bits/stdc++.h>
using namespace std;

// bool isPrime(int n) {
//     if (n <= 1) return 0;
//     if (n <= 3) return 1;
    
//     if (n % 2 == 0 || n % 3 == 0) return 0;
    
//     for (int i = 5; i <= sqrt(n); i += 6) {
//         if (n % i == 0) return 0;
//     } 
//     return 1;
// }

bool isPrime(int num)
{
    if(num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) 
        if (num % i == 0) return 0;
    return 1;
}

int main() {
    int N, n, t = 0;
    cin >> N; 
    for (int i = 0; i < N; i++) {
        cin >> n;
        t += isPrime(n);
    }
    cout << t << "\n";
}
