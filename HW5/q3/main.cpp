#include<bits/stdc++.h>

using namespace std;
pair<long long, long long> afrad[100005];
//algorithmi nadaram :)

bool cmp(pair<long long, long long> p1, pair<long long, long long> p2) {
    if (p1.first > p2.first)
        return true;
    else if (p1.first == p2.first)
        if (p1.second <= p2.second)
            return true;
    return false;
}

bool cmper(long long a, long long b) {
    return cmp(afrad[b], afrad[a]);
}

int main() {
    long long n, m;
    cin >> n >> m;
    list<long long> better;
    list<long long> equalworse;
    for (long long j = 0; j < n; ++j) {
        afrad[j].first = 0;
        afrad[j].second = 0;
        if (j != 0)
            equalworse.push_back(j);
    }
    for (long long i = 0; i < m; ++i) {
        long long x, y;
        cin >> x >> y;
        afrad[x - 1].first++;
        afrad[x - 1].second += y;
        if (x == 1) {
            {
                better.sort(cmper);
                for (auto i = better.begin(); i != better.end();) {
                    if (cmp(afrad[0], afrad[*i])) {
                        equalworse.push_back(*i);
                        i = better.erase(i);
                    } else {
                        i++;
                        break;
                    }
                }
            }
        } else {
            bool finds = find(better.begin(), better.end(), x - 1) != better.end();
            if (cmp(afrad[0], afrad[x - 1])) {
                if (finds) {
                    equalworse.push_back(x - 1);
                    better.remove(x - 1);
                }
            } else {
                if (!finds) {
                    better.push_back(x - 1);
                    equalworse.remove(x - 1);
                }
            }
        }
        cout << better.size() + 1 << endl;
    }
}
