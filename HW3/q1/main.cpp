#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

bool cmp(pair<double, double> p1, pair<double, double> p2) {
    if (p1.second > p2.second)
        return false;
    else if (p1.second < p2.second)
        return true;
    else {
        p1.first - p2.first;
    }
}

int main() {
    long n, d;
    cin >> n >> d;
    pair<double, double> adad[n];
    bool seen[n];
    bool is = true;
    for (long i = 0; i < n; ++i) {
        cin >> adad[i].first;
        cin >> adad[i].second;
        seen[i] = false;
        if (is) {
            if (adad[i].second > d) {
                is = false;
            } else {
                double keep = adad[i].first;
                adad[i].first = keep - sqrt(d * d - adad[i].second * adad[i].second);
                adad[i].second = keep + sqrt(d * d - adad[i].second * adad[i].second);
            }
        }
    }
    if (!is) {
        cout << -1 << endl;
    } else {
        long c = 0;
        sort(adad, adad + n, cmp);
        for (long i = 0; i < n; ++i) {
            if (!seen[i]) {
                seen[i] = true;
                for (long j = i + 1; j < n; ++j) {
                    if (seen[j] == false) {
                        if (adad[j].first <= adad[i].second) {
                            seen[j] = true;
                        }
                    }
                }
                c++;
            }
        }
        cout << c << endl;
    }
}