#include <iostream>
#include <vector>

using namespace std;
long rishe[100005] = {0};

long findroot(vector<long> bache[], long n) {
    for (long i = 0; i < n; ++i) {
        for (long j = 0; j < bache[i].size(); ++j) {
            rishe[bache[i][j]] = 1;
        }
    }
    for (long k = 0; k < n; ++k) {
        if (rishe[k] == 0) {
            rishe[k] = 1;
            return k;
        }
    }
    return -1;
}

long dfs(long node, long level, vector<long> bache[], long res[]) {
    if (bache[node].empty()) {
        return level;
    }
    long sum = 0;
    for (long i = 0; i < bache[node].size(); ++i) {
        long t = dfs(bache[node][i], level + 1, bache, res);
        res[bache[node][i]] = t;
        sum += t;
    }
    sum += level;
    return sum;
}

int main() {
    long n;
    cin >> n;
    vector<long> bache[n];
    long res[n];
    for (long i = 0; i < n; ++i) {
        long m;
        cin >> m;
        for (long j = 0; j < m; ++j) {
            long temp;
            cin >> temp;
            bache[i].push_back(temp - 1);
        }
    }
    int is = true;
    while (is) {
        long root = findroot(bache, n);
        if (root == -1) {
            break;
        } else {
            res[root] = dfs(root, 1, bache, res);
        }
    }
    for (long k = 0; k < n; ++k) {
        cout << res[k] << " ";
    }
}
