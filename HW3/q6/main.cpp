#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int adad[n];
    int maxl[n];
    for (int i = 0; i < n; ++i) {
        maxl[i] = 1;
        cin >> adad[i];
    }
    bool is = true;
    bool side = true;
    for (int i = 0; i < n - 1; ++i) {
        if (side) {
            if (adad[i] < adad[i + 1]) {
                maxl[i + 1] = maxl[i] + 1;
                side = false;
            } else {
                maxl[i + 1] = maxl[i];
            }
        } else {
            if (adad[i] > adad[i + 1]) {
                maxl[i + 1] = maxl[i] + 1;
                side = true;
            } else {
                maxl[i + 1] = maxl[i];
            }
        }
    }
//    for (int k = 0; k < n; ++k) {
//        cout << maxl[k] << " ";
//    }
    cout << maxl[n - 1] << " ";
}

