#include <stdio.h>

int main () {
	int number[] = {5,6,7,8,9};
	int n = sizeof(number) / sizeof(number[0]);
	printf("cac phan tu trong mang theo thu tu tu cuoi ve dau la: \n");
	for (int i = n - 1; i >= 0; i-- ) {
		printf("%d", number[i]);
	}
	
	return 0;
}
