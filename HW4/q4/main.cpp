#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long arr[n];
    int sum = 0;
    for (long long i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }
    int save[n + 1][sum + 1];
    for (int i = 0; i < n + 1; i++) {
        save[i][0] = 1;
    }
    for (int i = 1; i < sum + 1; i++) {
        save[0][i] = 0;
    }
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < sum + 1; j++) {
            save[i][j] = save[i - 1][j];
            if (arr[i - 1] <= j) {
                save[i][j] = max(save[i][j], save[i - 1][j - arr[i - 1]]);
            }
        }
    }
//    for (int i = 0; i < n + 1; i++) {
//        for (int j = 0; j < sum + 1; j++) {
//            cout << save[i][j] << " ";
//        }
//        cout << endl;
//    }
    int res = sum;
    for (int j = sum / 2; j >= 0; j--) {
        if (save[n][j] == 1) {
            res = sum - 2 * j;
            break;
        }
    }
    cout << res << endl;
}

