#include <iostream>
#include <bits/stdc++.h>

using namespace std;
long long n, m;
long long sets[100005], h[100005], x[100005];

long long find(long long a) {
    long long y = a;
    while (sets[y] != y) {
        y = sets[y];
    }
    return y;
}

void merge(long long a, long long b) {
    if (h[a] < h[b]) {
        sets[a] = b;
        if (a != b) {
            x[b]++;
            x[a] = 0;
        }
        h[b]++;
    } else if (h[b] < h[a]) {
        sets[b] = a;
        if (a != b) {
            x[a]++;
            x[b] = 0;
        }
        h[a]++;
    } else {
        sets[a] = b;
        if (a != b) {
            x[b]++;
            x[a] = 0;
        }
        h[b]++;
    }
}

int main() {
    cin >> n >> m;
    for (long long i = 1; i < n + 1; ++i) {
        sets[i] = i;
        h[i] = 0;
        x[i] = 1;
    }
    long long a, b;
    for (int j = 0; j < m; ++j) {
        cin >> a >> b;
        merge(find(a), find(b));
    }
    int c = 0;
    for (int k = 1; k < n + 1; ++k) {
//        cout << h[k] << " " << x[k] << endl;
        if (x[k] - h[k] > 0) {
            c += x[k] - h[k];
        }
    }
    cout << c << endl;
}
