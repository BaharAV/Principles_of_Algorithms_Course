#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    long long jadval[n + 1][k + 1];
    long long i, j;
    if (n < k) {
        cout << 0 << endl;
    } else {
        for (i = 0; i < n + 1; i++) {
            for (j = 0; j < min(i, k) + 1; j++) {
                if (j == 0 || i == 0 || j == i) {
                    jadval[i][j] = 1;
                } else {
                    jadval[i][j] = (jadval[i - 1][j - 1] + jadval[i - 1][j]) % 1000000007;
                }
            }
        }
        cout << jadval[n][k] << endl;
    }
}

