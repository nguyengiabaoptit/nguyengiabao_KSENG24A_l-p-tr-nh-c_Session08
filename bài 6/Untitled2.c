#include <stdio.h>

int main() {
    int n;
    printf("Nhap kich thuoc ma tran vuong (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Nhap cac phan tu cua ma tran:\n");
    int i; 
    for (i = 0; i < n; i++) {
    	int j; 
        for (j = 0; j < n; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Cac phan tu tren duong cheo chinh la: ");
    int sum = 0;
    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
        sum += matrix[i][i];
    }

    printf("\nTong cac phan tu tren duong cheo chinh la: %d\n", sum);

    return 0;
}

