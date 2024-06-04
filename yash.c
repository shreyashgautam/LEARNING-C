#include <stdio.h>
#include <stdlib.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int dfs(int r, int c, int grid[MAX_ROWS][MAX_COLS], int rows, int cols);

int maxAreaOfBlock(int grid[MAX_ROWS][MAX_COLS], int rows, int cols) {
    int maxArea = 0;

    // Helper function to perform depth-first search to find the area of a block
    int dfs(int r, int c, int grid[MAX_ROWS][MAX_COLS], int rows, int cols) {
      if (r < 0 || r >= rows || c < 0 || c >= cols || grid[r][c] == 0) {
            return 0;
        }

        grid[r][c] = 0; // Mark the cell as visited

        int area = 1; // Area of the current cell

        // Perform DFS in all four directions
        area += dfs(r + 1, c, grid, rows, cols);
        area += dfs(r - 1, c, grid, rows, cols);
        area += dfs(r, c + 1, grid, rows, cols);
        area += dfs(r, c - 1, grid, rows, cols);

        return area;
    }

    // Iterate through each cell to find blocks and their areas
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (grid[i][j] == 1) {
                int area = dfs(i, j, grid, rows, cols);
                maxArea = area > maxArea ? area : maxArea;
            }
        }
    }

    return maxArea;
}

int main() {
    int grid[MAX_ROWS][MAX_COLS];
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &grid[i][j]);
        }
    }

    int maxArea = maxAreaOfBlock(grid, rows, cols);
    printf("Maximum area of a block in the grid: %d\n", maxArea);

    return 0;
}