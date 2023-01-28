#include <stdlib.h>
#include <stdio.h>

int main() {
	int** pparray = (int**)calloc(5, sizeof(int*));

	for (int i = 0; i < 5; i++) {
		*(pparray + i) = (int*)calloc(7, sizeof(int));
	}




	for (int i = 0; i < 5; i++) {
		free(*(pparray + i));
	}
	free(pparray);

}