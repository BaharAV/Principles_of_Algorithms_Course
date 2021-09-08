#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int sets[100005];

int find(int a) {
    int y = a;
    while (sets[y] != y) {
        y = sets[y];
    }
    int r = y;
    y = a;
    while (sets[y] != y) {
        int z = sets[y];
        sets[y] = r;
        y = z;
    }
    return r;
}

void merge(int x, int t) {
    sets[x] = t;
}

bool cmp(pair<int, int> p1, pair<int, int> p2) {
    if ((p1.second - p1.first) > (p2.second - p2.first))
        return true;
    else return false;
}

int main() {
    int n;
    int max = 0;
    cin >> n;
    vector<pair<int, int>> adad;
    for (int i = 0; i < n; ++i) {
        int tedad;
        cin >> tedad;
        for (int j = 0; j < tedad; ++j) {
            adad[i].first = j + 1;
            cin >> adad[i].second;
        }
        for (int k = 0; k < tedad; ++k) {

        }
    }
    for (int m = 0; m < n; ++m) {
        if (adad[m].second > max)
            max = adad[m].second;
    }
    sort(adad, adad + n, cmp);
    for (int l = 0; l < max + 1; ++l) {
        sets[l] = l;
    }
    bool is = true;
    for (int j = 0; j < n; ++j) {
        int x = find(adad[j].second);
        if (x > 0) {
            if (x >= adad[j].first) {
                int t = find(x - 1);
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
    if (is)
        cout << "YES" << endl;
}