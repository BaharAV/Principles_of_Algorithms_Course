#include <iostream>

using namespace std;

void print(long long before[], long long back, long long i) {

    if (before[back] == -1) {
        cout << i << endl;
        cout << back + 1 << " ";
    } else {
        i++;
        print(before, before[back], i);
        cout << back + 1 << " ";
    }
}

int main() {
    long long n;
    cin >> n;
    long long adad[n + 1];
    for (long long i = 0; i < n; ++i) {
        cin >> adad[i];
    }
    long long tedad[n];
    long long before[n];
    long long fore[n]; //ja for e
    if (n == 0) {
        cout << 0 << endl;
        cout << 0 << endl;
    } else if (n == 1) {
        cout << adad[0]<<endl;
        cout << 1 << endl;
        cout << 1 << endl;
    } else if (n == 2) {
        if (adad[0] > adad[1]) {
            cout << adad[0] << endl;
            cout << 1 << endl;
            cout << 1 << endl;
        } else {
            cout << adad[1] << endl;
            cout << 1 << endl;
            cout << 2 << endl;
        }
    } else if (n == 3) {
        if (adad[0] + adad[2] > adad[1]) {
            cout << adad[0] + adad[2] << endl;
            cout << 2 << endl;
            cout << 1 << " " << 3 << endl;
        } else {
            cout << adad[1] << endl;
            cout << 1 << endl;
            cout << 2 << endl;
        }
    } else {
        long long tah;
        long long tahja;
        //0
        tedad[0] = adad[0];
        before[0] = -1;
        fore[0] = adad[0];
        //1
        tedad[1] = adad[1];
        before[1] = -1;
        if (tedad[0] > tedad[1]) {
            fore[1] = 0;
        } else {
            fore[1] = 1;
        }
        //2
        tedad[2] = adad[2] + adad[0];
        before[2] = 0;
        if (tedad[2] > tedad[fore[1]]) {
            fore[2] = 2;
            tah = tedad[2];
            tahja = 2;
        } else {
            fore[2] = 1;
            tah = tedad[fore[1]];
            tahja = fore[1];
        }
        //baghie
        for (long long i = 3; i < n; i++) {
            tedad[i] = tedad[fore[i - 2]] + adad[i];
            before[i] = fore[i - 2];
            if (tedad[i] > tedad[fore[i - 1]]) {
                fore[i] = i;
            } else {
                fore[i] = i - 1;
            }
            if (tedad[i] > tah) {
                tah = tedad[i];
                tahja = i;
            }
        }
        cout << tah << endl;
        print(before, tahja, 1);
        cout << endl;
//        for (long long j = 0; j < n; ++j) {
//            cout << tedad[j] << " ";
//        }
//        cout << endl;
//        for (long long j = 0; j < n; ++j) {
//            cout << fore[j] << " ";
//        }
//        cout << endl;
//        for (long long j = 0; j < n; ++j) {
//            cout << before[j] << " ";
//        }
//        cout << endl;
    }
}