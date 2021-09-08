#include <bits/stdc++.h>

using namespace std;
long long n, m;
long long res = 0;
long long save[20][20];

void solver(long long sol[], long long i, bool gn[], long long javab) {
    if (i >= n) {
//        for (long long j = 0; j < n; ++j) {
//            cout << sol[j] << " ";
//        }
//        cout << endl;
        if (javab > res) {
            res = javab;
        }
    } else if (i == 0) {
        for (long long j = 0; j < m; ++j) {
            for (long long k = 0; k < m; ++k) {
                if (j != k) {
                    sol[i] = j;
                    sol[i + 1] = k;
                    gn[j] = true;
                    gn[k] = true;
                    solver(sol, i + 2, gn, javab + save[sol[i]][sol[i + 1]]);
                    gn[j] = false;
                    gn[k] = false;
                }
            }
        }
    } else {
        for (long long j = 0; j < m; ++j) {
            if (!gn[j]) {
                sol[i] = j;
                gn[j] = true;
                solver(sol, i + 1, gn, javab + save[sol[i - 1]][sol[i]]);
                gn[j] = false;
            }
        }
    }
}

int main() {
    //nrooz
    //mrest
    cin >> n >> m;
    long long sol[n];
    bool gone[m];
    memset(sol, -1, n);
    memset(gone, false, m);
    for (long long i = 0; i < m; ++i) {
        for (long long j = 0; j < m; ++j) {
            long long x;
            cin >> x;
            save[i][j] = x;
        }
    }
    solver(sol, 0, gone, 0);
    cout << res << endl;
}