#include <bits/stdc++.h>

using namespace std;

long long n;
vector<long long> adad;
vector<long long> maxl;

long long binarySearch(long long l, long long r, long long x) {
    while (r - l > 1) {
        int m = l + (r - l) / 2;
        if (maxl[m] >= x)
            r = m;
        else
            l = m;
    }
    return r;
}

long long lis() {
    long long last = 1;
    for (long long j = 0; j < adad.size(); ++j) {
        maxl.push_back(0);
    }
    maxl[0] = adad[0];
    for (long long i = 1; i < adad.size(); ++i) {
        if (adad[i] < maxl[0])
            maxl[0] = adad[i];
        else if (adad[i] > maxl[last - 1]) {
            maxl[last++] = adad[i];
        } else {
            //binary search ? :/
            long long r = binarySearch(-1, last - 1, adad[i]);
            maxl[r] = adad[i];
        }
    }
    return last;
}

int main() {
    cin >> n;
    long long max = (n - 1) * 2;
    for (long long i = 0; i < n; ++i) {
        long long tmp;
        cin >> tmp;
        if (tmp != 1 && i != 0)
            adad.push_back(tmp);
    }
    if (n == 1)
        cout << 0 << endl;
    else {
        long long min = lis();
        cout << max - min << endl;
    }
}