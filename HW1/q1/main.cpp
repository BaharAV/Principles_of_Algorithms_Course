#include <iostream>

using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    if (a == 0)
        return b;
    if (a == b)
        return a;
    if (a > b)
        return gcd(b, a % b);
    if (a < b)
        return gcd(a, b % a);
}

int main() {

    long long n, m, max = 1;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        cin >> m;
        if (m >= 2) {
            long long adad[m];
            for (int j = 0; j < m; j++) {
                cin >> adad[j];
            }
            for (long long a = 0; a < m; a++) {
                for (long long b = a + 1; b < m; b++) {
                    long long temp = gcd(adad[a], adad[b]);
                    if (temp > max) {
                        max = temp;
                    }
                }
            }
            cout << max << endl;
            max = 1;
        } else {
            if (m == 1) {
                long long t;
                cin >> t;
            }
            cout << -1 << endl;
        }
    }
}
