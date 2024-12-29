#include <stdio.h>

int main() {
    int rows, cols;
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &rows);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    printf("Nhap cac phan tu cua ma tran:\n");
    int i; 
    for (i = 0; i < rows; i++) {
    	int j; 
        for (j = 0; j < cols; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;
    for (i = 0; i < rows; i++) { 
    int j; 
        for (j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                sum += matrix[i][j];
            }
        }
    }

    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);

    return 0;
}

