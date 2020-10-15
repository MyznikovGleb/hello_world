#include <stdio.h>

int main(void) {
	
	int* arr;
	
	arr = (int*)malloc(10*sizeof(int));
	
	for (int i = 0; i < 10; i++)
		arr[i] = 1;
	
	arr = (int*)realloc(arr, 10*sizeof(int));
	
	printf("Hello world!\n");

    return 0;
}
