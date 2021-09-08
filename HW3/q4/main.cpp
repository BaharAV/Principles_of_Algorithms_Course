#include <iostream>

using namespace std;
string a, b;

int main() {

    cin >> a >> b;
    int al = a.length();
    int bl = b.length();

    int dp[al + 1][bl + 1];

    for (int l = 0; l < al + 1; ++l) {
        dp[l][0] = l;
    }
    for (int l = 0; l < bl + 1; ++l) {
        dp[0][l] = l;
    }
    for (int i = 1; i < al + 1; i++) {
        for (int j = 1; j < bl + 1; j++) {
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = min(min(dp[i][j - 1], dp[i - 1][j]), dp[i - 1][j - 1]) + 1;
            }
        }
    }
//    for (int k = 0; k < al + 1; ++k) {
//        for (int i = 0; i < bl + 1; ++i) {
//            cout << dp[k][i] << " ";
//        }
//        cout << endl;
//    }
    cout << dp[al][bl];
    return 0;
}