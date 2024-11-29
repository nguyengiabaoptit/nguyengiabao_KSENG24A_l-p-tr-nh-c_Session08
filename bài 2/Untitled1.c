#include <stdio.h>

int main() {
	int sumer[] = {1,2,3,4,5};
	int n = sizeof(sumer) / sizeof(int[0]);
	int x, found = 0;
	printf("nhap vao phan tu can tim:");
	scanf("%d", &x);
	for (int i = 0; i < n; i++){
		if (sumer[i] == x) {
			printf("vi tri phan tu trong mang la: %d \n", i);
			found = 1;
			break;
		}
	}
	if(found == 0) {
		printf("phan tu khong ton tai trong mang. \n");
	}
	return 0;
}
