#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int* arr;
	
	arr = (int*)malloc(10*sizeof(int));
	
	for (int i = 0; i < 15; i++)
		arr[i] = 1;
	
	arr = (int*)realloc(arr, 100*sizeof(int));
	
	// fuckfuckfuck;

    return 0;
}
