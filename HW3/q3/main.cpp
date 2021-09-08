#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long long n;
    cin >> n;
    pair<double, long long> chart[n];
    long long jam = 0;
    for (long long i = 0; i < n; ++i) {
        cin >> chart[i].first;
        cin >> chart[i].second;
        jam += chart[i].second;
    }
    double jadval[n + 1][jam + 1];
    for (long long j = 0; j < jam + 1; ++j) {
        jadval[0][j] = 0;
    }
    jadval[0][0] = 1.0;
    for (long long i = 1; i < n + 1; ++i) {
        for (long long j = 0; j < jam + 1; ++j) {
            if (j >= chart[i - 1].second) {
                jadval[i][j] =
                        (1 - chart[i - 1].first) * jadval[i - 1][j] +
                        chart[i - 1].first * jadval[i - 1][j - chart[i - 1].second];
            } else {
                jadval[i][j] =
                        (1 - chart[i - 1].first) * jadval[i - 1][j];
            }

        }
    }
//    for (long long k = 0; k < n + 1; ++k) {
//        for (long long i = 0; i < jam + 1; ++i) {
//            cout << jadval[k][i] << " ";
//        }
//        cout << endl;
//    }
    double res = 0;
    for (long long l = jam / 2 + 1; l < jam + 1; ++l) {
        res += jadval[n][l];
    }
    cout << std::fixed;
    cout << std::setprecision(4);
    cout << res << endl;
}