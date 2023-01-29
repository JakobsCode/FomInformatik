#include <stdio.h>
#include <stdlib.h>

void input(int* array, int size);
void output(int* array, int size);
double average(int* array, int size);

int main() {
    int size;
    double sum = 0;

    while (1)
    {
        printf("Enter the number of elements to read in: ");
        scanf_s("%d", &size);

        if (size <= 0)
        {
            break;
        }

        int* array = (int*)calloc(size, sizeof(int));
        input(array, size);
        output(array, size);
        sum += average(array, size);
        free(array);
    }
    printf("Total sum of averages: %lf\n", sum);
    return 0;
}

void input(int* array, int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf_s("%d", &array[i]);
    }
}

void output(int* array, int size) {
    printf("Array: [");
    for (int i = 0; i < size; i++) {
        printf("%d", array[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

double average(int* array, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return (double)sum / size;
}