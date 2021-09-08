#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void BFS(vector<int> arr[], int begin, int n, int dist[]) {
    list<int> queue;
    bool visited[n];
    for (int i = 0; i < n; i++) {
        visited[i] = false;
        dist[i] = INT_MAX;
    }
    visited[begin] = true;
    dist[begin] = 0;
    queue.push_back(begin);
    while (!queue.empty()) {
        int u = queue.front();
        queue.pop_front();
        for (int i = 0; i < arr[u].size(); i++) {
            if (!visited[arr[u][i]]) {
                visited[arr[u][i]] = true;
                dist[arr[u][i]] = dist[u] + 1;
                queue.push_back(arr[u][i]);
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }
    vector<int> atraf[n * m];
    bool has = false;
    int keep = 0;
    int begin;
    int size = 0;
    vector<int> end;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int in = i * m + j;
            if (arr[i][j] == 'O' || arr[i][j] == 'H' || arr[i][j] == 'D' || arr[i][j] == 'T') {
                if (arr[i][j] == 'H') {
                    begin = in;
                } else if (arr[i][j] == 'D') {
                    size++;
                    end.push_back(in);
                } else if (arr[i][j] == 'T') {
                    if (has) {
                        atraf[in].push_back(keep);
                        atraf[keep].push_back(in);
                    } else {
                        keep = in;
                        has = true;
                    }
                }
                if (i - 1 >= 0) {
                    atraf[in].push_back((i - 1) * m + j);
                }
                if (i + 1 < n) {
                    atraf[in].push_back((i + 1) * m + j);
                }
                if (j - 1 >= 0) {
                    atraf[in].push_back(i * m + j - 1);
                }
                if (j + 1 < m) {
                    atraf[in].push_back(i * m + j + 1);
                }
            } else if (arr[i][j] == 'S') {
                if (i - 1 >= 0) {
                    atraf[in].push_back((i - 1) * m + j);
                    if (j - 1 >= 0) {
                        atraf[in].push_back((i - 1) * m + j - 1);
                    }
                    if (j + 1 < m) {
                        atraf[in].push_back((i - 1) * m + j + 1);
                    }
                }
                if (i + 1 < n) {
                    atraf[in].push_back((i + 1) * m + j);
                    if (j + 1 < m) {
                        atraf[in].push_back((i + 1) * m + j + 1);
                    }
                    if (j - 1 >= 0) {
                        atraf[in].push_back((i + 1) * m + j - 1);
                    }
                }
                if (j - 1 >= 0) {
                    atraf[in].push_back(i * m + j - 1);
                }
                if (j + 1 < m) {
                    atraf[in].push_back(i * m + j + 1);
                }
            } else if (arr[i][j] == 'W') {

            }
        }
    }
    int dist[n * m] = {99999};
    BFS(atraf, begin, n * m, dist);
    int min = 99999;
    for (int k = 0; k < size; ++k) {
        if (dist[end[k]] < min)
            min = dist[end[k]];
    }
    if (min == 99999) {
        cout << -1 << endl;
    } else
        cout << min << endl;
}