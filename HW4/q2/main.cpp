#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long arr[n];
    long long maxx, save;
    for (long long i = 0; i < n; ++i) {
        cin >> arr[i];
        if (i == 0) {
            maxx = arr[0];
            save = arr[0];
        } else {
            save = max(arr[i], save + arr[i]);
            maxx = max(maxx, save);
        }
    }
    cout << maxx << endl;
}
