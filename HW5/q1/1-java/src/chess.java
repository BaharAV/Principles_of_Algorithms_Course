import java.util.Scanner;

public class chess {
    private int n, k, res = 0;

    private void checker(int i, int j, int brd[][]) {
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

    private void solver(int row, int col, int brd[][], int ks) {
        if (ks == 0) {
            res++;
        } else {
            for (int i = row; i < n; i++) {
                for (int j = col; j < n; j++) {
                    if (brd[i][j] == -1) {
                        if (ks != 0) {
                            int[][] newbrd = new int[n][n];
                            for (int y = 0; y < n; y++) {
                                for (int z = 0; z < n; z++) {
                                    newbrd[y][z] = brd[y][z];
                                }
                            }
                            newbrd[i][j] = 1;
                            checker(i, j, newbrd);
                            solver(i, j, newbrd, ks - 1);
                        }
                    }
                }
                col = 0;
            }
        }
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        chess board = new chess();
        board.n = in.nextInt();
        board.k = in.nextInt();
        int[][] brd = new int[board.n][board.n];
        for (int i = 0; i < board.n; i++) {
            for (int j = 0; j < board.n; j++) {
                brd[i][j] = -1;
            }
        }
        board.solver(0, 0, brd, board.k);
        System.out.println(board.res);
    }
}
