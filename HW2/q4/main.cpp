#include <iostream>
#include <bits/stdc++.h>

using namespace std;
long long n, q;
long long sets[100005], h[100005], x[100005];

long long find(long long a) {
    long long y = a;
    while (sets[y] != y) {
        y = sets[y];
    }
    return y;
}

void merge(long long a, long long b) {
    if (a != b) {
        if (h[a] < h[b]) {
            sets[a] = b;
            x[b] = x[b] + x[a] + 1;
        } else if (h[b] < h[a]) {
            sets[b] = a;
            x[a] = x[a] + x[b] + 1;
        } else {
            sets[a] = b;
            h[b]++;
            x[b] = x[b] + x[a] + 1;
        }
    }
}

int main() {
    cin >> n >> q;
    for (long long i = 1; i < n + 1; ++i) {
        sets[i] = i;
        h[i] = 0;
        x[i] = 0;
    }
    long long order;
    for (long long j = 0; j < q; ++j) {
        cin >> order;
        if (order == 1) {
            long long a, b;
            cin >> a >> b;
            merge(find(a), find(b));
        } else {
            long long a;
            cin >> a;
            cout << x[find(a)] << endl;
        }
    }

}