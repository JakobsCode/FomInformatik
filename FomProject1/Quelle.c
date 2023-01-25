#include <stdio.h>

int symetricArray(char* array, int firstIndex, int secondIndex)
{
	if (array[firstIndex] != array[secondIndex]) return 0;
	if (secondIndex - firstIndex <= 1) return 1;
	return symetricArray(array, firstIndex + 1, secondIndex - 1);
}


int main()
{
	char myArray[] = "OtZTKtO";
	printf("%d\n", symmetricArrayIndex(myArray, 0, 6));
}