#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
long size = 1000005;
bool prime[1000005];
long satr, sotoon;

void makeprime() {
    memset(prime, true, sizeof(prime));
    for (long p = 2; p * p <= size; p++) {
        if (prime[p]) {
            for (long i = p * p; i <= size; i += p)
                prime[i] = false;
        }
    }
}

bool isprime(long is) {
    return prime[is];
}

int main() {
    long in, tedad = 0;
    vector<long> numbers;
    numbers.push_back(0);
    while (true) {
        cin >> in;
        if (in == 0) {
            break;
        } else {
            numbers.push_back(in);
            tedad++;
        }
    }
    makeprime();
    for (long i = 2; i < tedad; ++i) {
        if (isprime(i) && tedad % i == 0) {
            satr = min(tedad / i, i);
            sotoon = max(tedad / i, i);
        }
    }
    pair<long, long> minsatr[satr];
    pair<long, long> maxsatr[satr];
    for (int i = 0; i < satr; ++i) {
        long max = 0;
        long min = 9999999;
        for (int j = 0; j < sotoon; ++j) {
            if (numbers[i * sotoon + j + 1] > max) {
                max = numbers[i * sotoon + j + 1];
                maxsatr[i] = make_pair(i + 1, j + 1);
            }
            if (numbers[i * sotoon + j + 1] < min) {
                min = numbers[i * sotoon + j + 1];
                minsatr[i] = make_pair(i + 1, j + 1);
            }
        }
    }
    pair<long, long> minsotoon[sotoon];
    pair<long, long> maxsotoon[sotoon];
    for (int i = 0; i < sotoon; ++i) {
        long max = 0;
        long min = 9999999;
        for (int j = 0; j < satr; ++j) {
            if (numbers[i + 1 + j * sotoon] > max) {
                max = numbers[i + 1 + j * sotoon];
                maxsotoon[i] = make_pair(j + 1, i + 1);
            }
            if (numbers[i + 1 + j * sotoon] < min) {
                min = numbers[i + 1 + j * sotoon];
                minsotoon[i] = make_pair(j + 1, i + 1);
            }
        }
    }
    int c = 0;
    for (int j = 0; j < satr; ++j) {
        for (int i = 0; i < sotoon; ++i) {
            if (minsatr[j] == minsotoon[i] || minsatr[j] == maxsotoon[i] || maxsatr[j] == maxsotoon[i] ||
                maxsatr[j] == minsotoon[i]) {
                c++;
            }
        }
    }
    cout << c << endl;
    for (int j = 0; j < satr; ++j) {
        for (int i = 0; i < sotoon; ++i) {
            if (minsatr[j] == minsotoon[i] || minsatr[j] == maxsotoon[i] || maxsatr[j] == maxsotoon[i] ||
                maxsatr[j] == minsotoon[i]) {
                if (minsatr[j] == minsotoon[i] || minsatr[j] == maxsotoon[i]) {
                    cout << minsatr[j].first << " " << minsatr[j].second << endl;
                }
                if (maxsatr[j] == minsotoon[i] || maxsatr[j] == maxsotoon[i]) {
                    cout << maxsatr[j].first << " " << maxsatr[j].second << endl;
                }
            }
        }
    }
}