#include <iostream>
#include <bits/stdc++.h>

using namespace std;
long long res = 1;

void dfs(long long v, bool visited[], vector<long long> arr[]) {
    visited[v] = true;
    res++;
    for (long long i = 0; i < arr[v].size(); i++)
        if (!visited[arr[v][i]])
            dfs(arr[v][i], visited, arr);
}

void caller(long long ras, vector<long long> arr[]) {
    bool visited[ras];
    for (long long i = 0; i < ras; i++)
        visited[i] = false;
    bool has = true;
    long long keep = 0;
    while (has) {
        auto it = std::find(visited, visited + ras, false);
        if (it >= visited + ras) {
            break;
        } else {
            res--;
            dfs(it - visited, visited, arr);
        }
    }
}

int main() {
    long long n, yal;
    cin >> n >> yal;
    vector<long long> arr[n];
    for (long long i = 0; i < yal; ++i) {
        long long a, b;
        cin >> a >> b;
        a--;
        b--;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    caller(n, arr);
    cout << yal - (res - 1) << endl;
}