#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<pair<long long, pair<long long, long long>>> graph;
long long n, m, x, yal = 0;
vector<long long> edge[1000005];
long long parent[1000005];
long long plc[1000005];


long long find(long long a) {
    long long y = a;
    while (parent[y] != y) {
        y = parent[y];
    }
    return y;
}


void merge(long long x, long long y) {
    if (plc[x] > plc[y])
        parent[y] = x;
    else
        parent[x] = y;
    if (plc[x] == plc[y])
        plc[y]++;
}

long long kruskal() {
    long long best = 0;
    sort(graph.begin(), graph.end());
    for (long long i = 1; i <= n; i++) {
        plc[i] = 0;
        parent[i] = i;
    }
    for (long long i = 0; i < graph.size(); ++i) {
        long long uset = find(graph[i].second.first);
        long long vset = find(graph[i].second.second);
        if (uset != vset) {
            best += graph[i].first;
            yal++;
            merge(find(uset), find(vset));
        }
    }
    return best;
}


int main() {
    cin >> n >> m >> x;
    for (long long i = 0; i < m; ++i) {
        long long a, b, w;
        cin >> a >> b >> w;
        a--;
        b--;
        graph.push_back({-1 * w, {a, b}});
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    if (n - m > 1) {
        cout << -1 << endl;
    } else {
        long long best = kruskal();
        if (n - yal <= 1) {
            cout << -1 * best << endl;
        } else {
            cout << -1 << endl;
        }
    }
}
