#include <stdio.h>

int symetrischesArrayIndex(int myArray[], int firstindex, int secondindex) {
	if (firstindex == secondindex || firstindex + 1 == secondindex) {
		return myArray[firstindex] == myArray[secondindex];
	}
	else if (myArray[firstindex] != myArray[secondindex]) {
		return 0;
	}
	else {
		symetrischesArrayIndex(myArray, firstindex + 1, secondindex - 1);
	}
}

int main() {
	int myArray[] = { 1,2,3,2,1 };
	printf("%d", symetrischesArrayIndex(myArray, 0, 4));
	return 0;
}
