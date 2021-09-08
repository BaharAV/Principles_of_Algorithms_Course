#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int c = 0;
int fard, kar;

bool cmp(pair<pair<int, int>, int> p1, pair<pair<int, int>, int> p2) {
    if (p1.first.first > p2.first.first)
        return true;
    else if (p1.first.first < p2.first.first)
        return false;
    else {
        if (p1.second > p2.second)
            return true;
        else if (p1.second < p2.second)
            return false;
        else return p1.first.second - p1.first.first - p1.second > p2.first.second - p2.first.first - p2.second;
    }
}

int main() {
    vector<pair<pair<int, int>, int> > proj;
    cin >> fard >> kar;
    int max = 0;
    for (int i = 0; i < kar; ++i) {
        int a, b, v;
        cin >> a >> b >> v;
        proj.push_back(make_pair(make_pair(a, b), v));
        if (max < proj[i].first.second)
            max = proj[i].first.second;
    }
    sort(proj.begin(), proj.end(), cmp);
//    for (int k = 0; k < proj.size(); ++k) {
//        cout << proj[k].first.first << " " << proj[k].first.second << " " << proj[k].second << endl;
//    }
    for (int l = 0; l <= max; ++l) {
        for (int i = 0; i < fard; ++i) {
            int on = proj.size() - 1;
            if (on >= 0) {
                if ((proj[on].first.first <= l) &&
                    (proj[on].first.second - proj[on].first.first - proj[on].second >= 0)) {
                    if (proj[on].first.second >= l) {
                        if (proj[on].second == 1) {
                            proj.pop_back();
                            c++;
                        } else {
                            proj[on].second--;
                        }
                    }
                }
            }
        }
        for (int j = 0; j < proj.size(); ++j) {
            if (proj[j].first.first <= l)
                proj[j].first.first = l + 1;
        }
        sort(proj.begin(), proj.end(), cmp);
    }
    cout << c << endl;
}
