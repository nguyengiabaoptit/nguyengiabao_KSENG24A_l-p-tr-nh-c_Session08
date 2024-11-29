#include <stdio.h>

int main() {
	int rows = 3, cols = 3
	int array[3][3] = {
		{5,2,8}
		{1,6,3}
		{9,7,4}
};
    int max = array[0][0];
    for (int i = 0; i < rows; i++) {
    	for (int j = 0; j < cols; j++)
    	if (array[i][j]>max) {
    		max = array[i][j];
		}
	}
	printf("phan tu lon nhat trong mang la: %d \n",max);
	return 0;
}
