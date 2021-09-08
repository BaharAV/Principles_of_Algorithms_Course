#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    m++;
    long long jam[m][m];
    long long res[m][m];
    long long adad[m];
    for (long long i = 1; i < m; i++) {
        cin >> adad[i];
    }
    for (long long l = 0; l < m; l++) {
        for (long long i = 0; i < m; i++) {
            res[l][i] = 0;
            if (i == l) {
                jam[l][i] = adad[i];
            } else {
                jam[l][i] = 0;
            }

        }
    }
    for (long long i = 1; i < m; i++) {
        res[i][i + 1] = adad[i] + adad[i + 1];
        jam[i][i + 1] = res[i][i + 1];
    }
    for (long long l = 2; l < m; l++) {
        for (long long i = 1; i < m - l; i++) {
            res[i][i + l] = LONG_LONG_MAX;
            for (long long k = i; k < i + l; k++) {
                long long in = res[i][k] + res[k + 1][i + l] + jam[i][k] + jam[k + 1][i + l];
                if (in < res[i][i + l]) {
                    res[i][i + l] = in;
                    jam[i][i + l] = jam[i][k] + jam[k + 1][i + l];
                }
            }
        }
    }
    cout << res[1][m - 1];
    return 0;
}