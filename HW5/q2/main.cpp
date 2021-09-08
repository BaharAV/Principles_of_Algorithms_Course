#include <bits/stdc++.h>

using namespace std;
long long n, m;
bool mojaver[15][15];
long long sol[15];
bool is = false;

bool promising(long long i) {
    long long j = 0;
    while (j < i) {
        if (mojaver[i][j] == true) {
            if (sol[i] == sol[j]) {
                return false;
            }
        }
        j++;
    }
    return true;
}

void coloring(long long i, long long k) {
    if (promising(i)) {
        if (i == n - 1) {
            is = true;
            return;
        } else {
            for (long long j = 0; j < k; j++) {
                sol[i + 1] = j;
                coloring(i + 1, k);
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for (long long j = 0; j < n; ++j) {
        sol[j] = 0;
    }
    long long x, y;
    for (long long i = 0; i < m; i++) {
        cin >> x >> y;
        x--;
        y--;
        mojaver[x][y] = true;
        mojaver[y][x] = true;
    }
    if (m == 0) {
        cout << 1 << endl;
    } else {
        for (long long k = 1; k < n + 1; k++) {
            coloring(0, k);
            if (is) {
                cout << k << endl;
                break;
            }
        }
    }
}