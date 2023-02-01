#include <stdio.h>

int grid[9][9];

int find_unassigned(int *row, int *col) {
    int i, j;
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            if (grid[i][j] == 0) {
                *row = i;
                *col = j;
                return 1;
            }
        }
    }
    return 0;
}

int is_safe(int row, int col, int num) {
    int i, j;
    for (i = 0; i < 9; i++) {
        if (grid[row][i] == num) {
            return 0;
        }
    }
    for (i = 0; i < 9; i++) {
        if (grid[i][col] == num) {
            return 0;
        }
    }
    int row_start = (row / 3) * 3;
    int col_start = (col / 3) * 3;
    for (i = row_start; i < row_start + 3; i++) {
        for (j = col_start; j < col_start + 3; j++) {
            if (grid[i][j] == num) {
                return 0;
            }
        }
    }
    return 1;
}

int solve() {
    int row, col;
    if (!find_unassigned(&row, &col)) {
        return 1;
    }
    int num;
    for (num = 1; num <= 9; num++) {
        if (is_safe(row, col, num)) {
            grid[row][col] = num;
            if (solve()) {
                return 1;
            }
            grid[row][col] = 0;
        }
    }
    return 0;
}

int main() {
    // Example usage
    int i, j;
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            scanf("%d", &grid[i][j]);
        }
    }
    printf("\n\n");
    if (solve()) {
        for (i = 0; i < 9; i++) {
            for (j = 0; j < 9; j++) {
                printf("%d ", grid[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("No solution exists");
    }

    return 0;
}
