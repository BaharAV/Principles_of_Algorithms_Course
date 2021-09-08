#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long arr[n];
    long long total[n];
    for (long long j = 0; j < n; ++j) {
        cin >> arr[j];
    }
    for (int j = n - 1; j >= 0; --j) {
        if (j == n - 1) {
            total[j] = arr[j] + 1;
        } else {
            if (total[j + 1] - 1 > arr[j] + 1) {
                total[j] = total[j + 1] - 1;
            } else {
                total[j] = arr[j] + 1;
            }
        }
    }
    for (int k = 0; k < n; ++k) {
        if (k != 0) {
            if (total[k - 1] > total[k]) {
                total[k] = total[k - 1];
            }
        }
    }
//    for (long long k = 0; k < n; ++k) {
//        cout << "total " << total[k] << " ";
//        cout << endl;
//    }
    long long sum = 0;
    for (long long i = 0; i < n; ++i) {
        sum += (total[i] - 1 - arr[i]);
    }
    cout << sum << endl;

}