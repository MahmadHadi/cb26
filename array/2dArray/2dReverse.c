// https://cdn.kastatic.org/googleusercontent/_anqPXDhdx2MuQIN7S9F-nYDbxNVMFfrKL-bgihYpi1iqa-bi5Gggwy8k70xZgZ0j84IzMKQDg2VusdRgoUens4

#include <stdio.h>
int main()
{

    // int matrix[row][col] = {{elements of row1}, {elements of row2}, {elements of row3}, ... };

    int matrix[3][4] = {{2, 5, 3, 4}, {4, 7, 1, 5}, {3, 0, 5, 8}};

    for (int i = 2; i >= 0; i--) {
        for (int j = 3; j >= 0; j--) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
