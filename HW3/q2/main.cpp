#include <iostream>
#include <bits/stdc++.h>

using namespace std;
long long sets[1000005];

long long find(long long a) {
    long long y = a;
    while (sets[y] != y) {
        y = sets[y];
    }
    return y;
}

void merge(long long x, long long t) {
    sets[x] = t;
}

bool cmp(pair<long long, long long> p1, pair<long long, long long> p2) {
    long long a = p1.second - p1.first;
    long long b = p2.second - p2.first;
    return a > b;
}

int main() {
    long long n, k;
    long long max = 0;
    cin >> n >> k;
    pair<long long, long long> adad[n];
    for (long long i = 0; i < n; ++i) {
        cin >> adad[i].first;
        cin >> adad[i].second;
        if (adad[i].second > max)
            max = adad[i].second;
    }
    long long deg[max + 1];
    sort(adad, adad + n, cmp);
    for (long long l = 0; l < max + 1; ++l) {
        sets[l] = l;
        deg[l] = k;
    }
    bool is = true;
    for (long long j = 0; j < n; ++j) {
        if (deg[adad[j].second] > 1) {
            deg[adad[j].second]--;
        } else {
            long long x = find(adad[j].second);
            if (x > 0) {
                if (x >= adad[j].first) {
                    long long t = find(x - 1);
                    merge(x, t);
                } else {
                    cout << "NO" << endl;
                    is = false;
                    break;
                }
            } else {
                cout << "NO" << endl;
                is = false;
                break;
            }
        }
    }
    if (is)
        cout << "YES" << endl;
}