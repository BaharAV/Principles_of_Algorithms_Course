#include <bits/stdc++.h>

using namespace std;

long long lcs(long long a[], long long b[], long long n) {
    long long L[n + 1][n + 1];
    long long i, j;
    for (i = 0; i < n + 1; i++) {
        for (j = 0; j < n + 1; j++) {
            if (i == 0 || j == 0) {
                L[i][j] = 0;
            } else if (a[i - 1] == b[j - 1]) {
                L[i][j] = L[i - 1][j - 1] + 1;
            } else {
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
            }
        }
    }
    return L[n][n];
}

long long factorial(long long n) {
    return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

int main() {
    long long n, m;
    cin >> n >> m;
    long long a[n * m];
    //making a
    for (long long i = 0; i < n * m; ++i) {
        long long x, y;
        cin >> x;
        cin >> y;
        a[i] = x * 1000 + y;
    }
    //making b
    long long f[n];
    for (long long k = 0; k < n; ++k) {
        f[k] = k + 1;
    }
    long long tool = factorial(n);
    long long permute[tool][n];
    long long idx = 0;
    do {
        for (long long i = 0; i < n; i++) {
            permute[idx][i] = f[i];
        }
        idx++;
    } while (next_permutation(f, f + n));
    long long b[tool][n * m];
    for (long long j = 0; j < tool; ++j) {
        for (long long i = 0; i < n; ++i) {
            for (long long k = 0; k < m; ++k) {
                b[j][i * m + k] = permute[j][i] * 1000 + k + 1;
            }
        }
    }
//    for (long long j = 0; j < tool; ++j) {
//        for (long long i = 0; i < n * m; ++i) {
//            cout << b[j][i] << " ";
//        }
//        cout << endl;
//    }
    long long min = LONG_LONG_MAX;
    for (long long j = 0; j < tool; ++j) {
        long long lcss = lcs(a, b[j], n * m);
        if ((n * m - lcss) < min) {
            min = n * m - lcss;
        }
    }
    cout << min << endl;
}