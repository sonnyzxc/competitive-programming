#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>

bool isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) 
        if (num % i == 0) return 0;
    return 1;
}

int binarySearch(int x, int N, const vi &Li) {
    int L = 0, R = N - 1;
    int mid;
    while (L <= R) {
        // int mid = L + (R - L) / 2; // prevent overflow (remembered from Kattis?)
        mid = (L + R) / 2;
        if (Li[mid] == x) return 1;
        if (Li[mid] < x) L = mid + 1;
        else R = mid - 1;
    }
    return 0;
}
