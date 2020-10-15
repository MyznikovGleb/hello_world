#include <stdio.h>

int main(void) {
	
	int i;
	
	int* arr;
	
	arr = (int*)malloc(10*sizeof(int));
	
	for (i = 0; i < 10; i++)
		arr[i] = 1;
	
	printf("Hello world!\n");

    return 0;
}
