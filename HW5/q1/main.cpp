#include <bits/stdc++.h>

using namespace std;
int n, k, res = 0;

//pntr chn 2d array ro nemishe pas dd

void checker(int i, int j, int **brd) {
    if ((i + 1) < n && (j + 2) < n) {
        brd[i + 1][j + 2] = 0;
    }
    if ((i + 1) < n && (j - 2) >= 0) {
        brd[i + 1][j - 2] = 0;
    }
    if ((i - 1) >= 0 && (j + 2) < n) {
        brd[i - 1][j + 2] = 0;
    }
    if ((i - 1) >= 0 && (j - 2) >= 0) {
        brd[i - 1][j - 2] = 0;
    }
    if ((i + 2) < n && (j - 1) >= 0) {
        brd[i + 2][j - 1] = 0;
    }
    if ((i + 2) < n && (j + 1) < n) {
        brd[i + 2][j + 1] = 0;
    }
    if ((i - 2) >= 0 && (j - 1) >= 0) {
        brd[i - 2][j - 1] = 0;
    }
    if ((i - 2) >= 0 && (j + 1) < n) {
        brd[i - 2][j + 1] = 0;
    }

}

void solver(int row, int col, int **brd, int ks) {
    if (ks == 0) {
        res++;
    } else {
        for (int i = row; i < n; i++) {
            for (int j = col; j < n; j++) {
                if (brd[i][j] == -1) {
                    int **newbrd = new int *[n];
                    for (int o = 0; o < n; o++) {
                        newbrd[o] = new int[n];
                    }
                    for (int y = 0; y < n; y++) {
                        for (int z = 0; z < n; z++) {
                            newbrd[y][z] = brd[y][z];
                        }
                    }
                    newbrd[i][j] = 1;
                    checker(i, j, newbrd);
                    solver(i, j, newbrd, ks - 1);
                    for (int o = 0; o < n; o++) {
                        delete[] newbrd[o];
                    }
                    delete[] newbrd;
                }
            }
            col = 0;
        }
    }
}

int main() {
    cin >> n >> k;
    int **brd = new int *[n];
    for (int o = 0; o < n; o++) {
        brd[o] = new int[n];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            brd[i][j] = -1;
        }
    }
    solver(0, 0, brd, k);
    cout << res << endl;
}
