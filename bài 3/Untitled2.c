#include <stdio.h>

int main() {
	int n;
	printf("nhap kich thuoc ma tran vuong (n):");
	scanf("%d", &n);
	int mazic[n][n];
	printf("nhap phan tu cho cac ma tran: \n");
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++) {
			printf("phan tu tai hang %d, %d:", i + 1, j + 1);
			scanf("%d", &mazic[i][j]);
		}
	}
	printf("ma tran vua nhap la: \n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%4d", mazic[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
