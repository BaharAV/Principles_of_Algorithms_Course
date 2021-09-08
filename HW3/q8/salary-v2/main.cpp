#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<long long, long long> p1, pair<long long, long long> p2) {
    return p1.first < p2.first;
}

int main() {
    long long n;
    cin >> n;
    queue<long long> safs[n];
    vector<pair<long long, long long>> hame;
    for (long long i = 0; i < n; ++i) {
        long long m;
        cin >> m;
        for (long long j = 0; j < m; ++j) {
            long long x;
            cin >> x;
            safs[i].push(x);
            hame.push_back(make_pair(x, i));
        }
    }
    sort(hame.begin(), hame.end(), cmp);
    long long tedad = 0;
    bool ok = true;
    for (long long k = 0; k < hame.size(); ++k) {
        long long save = safs[hame[k].second].size();
        for (long long i = 0; i < save; ++i) {
            if (safs[hame[k].second].front() != hame[k].first) {
                if (tedad < safs[hame[k].second].front()) {
                    safs[hame[k].second].pop();
                    tedad++;
                } else {
                    ok = false;
                    break;
                }
            } else {
                if (tedad < safs[hame[k].second].front()) {
                    safs[hame[k].second].pop();
                    tedad++;
                    break;
                } else {
                    ok = false;
                    break;
                }
            }
        }
        if (!ok)
            break;
    }
    cout << tedad << endl;
}