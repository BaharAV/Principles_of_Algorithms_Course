#include <bits/stdc++.h>

using namespace std;

long long input[100005], final[100005];
long long res = 0;

void mergeandcount(long long left, long long mid, long long right) {
    long long pnt = left, vasat = mid + 1, save = left;
    while (left <= mid && vasat <= right) {
        if (input[left] <= input[vasat]) {
            final[pnt] = input[left];
            left++;
            pnt++;
        } else {
            res += mid - left + 1;
            final[pnt] = input[vasat];
            vasat++;
            pnt++;
        }
    }
    for (long long i = left; i <= mid; ++i) {
        final[pnt] = input[i];
        pnt++;
    }
    for (long long i = vasat; i <= right; ++i) {
        final[pnt] = input[i];
        pnt++;
    }
    for (int i = save; i <= right; ++i) {
        input[i] = final[i];
    }
}

void divider(long long left, long long right) {
    if (left >= right)
        return;
    long long mid = (left + right) / 2;
    divider(left, mid);
    divider(mid + 1, right);
    mergeandcount(left, mid, right);
}


int main() {
    long long n;
    cin >> n;
    for (long long i = 0; i < n; ++i) {
        cin >> input[i];
    }
    divider(0, n - 1);
    cout << res << endl;
}