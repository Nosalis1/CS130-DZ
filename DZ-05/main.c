#include <stdio.h>
#include <stdlib.h>

#define TASK_7
#define TASK_27

#ifdef TASK_7

typedef struct {
    double real;
    double imaginary;
} ComplexNumber;

void subtract(ComplexNumber *a, ComplexNumber *b, ComplexNumber *result) {
    result->real = a->real - b->real;
    result->imaginary = a->imaginary - b->imaginary;
}

#endif

#ifdef TASK_27

int* compress(const int* array,int length,int* new_length) {
    int *result = (int *) malloc(length * sizeof(int));
    if (!result)return NULL;

    int i = 0, j = 0;
    while (i < length) {
        if (array[i] == 0) {
            while (i < length && array[i] == 0) i++;
            result[j] = 0;
        } else {
            result[j] = array[i];
            i++;
        }
        j++;
    }
    *new_length = j;
    return result;
}

#endif

int main() {
#ifdef TASK_7
    // Task 7

    ComplexNumber a = {3.5, 2.0};
    ComplexNumber b = {1.5, 1.0};
    ComplexNumber result;
    subtract(&a, &b, &result);
    printf("Result: %.1lf + %.1lfi\n", result.real, result.imaginary);
#endif
#ifdef TASK_27
    // Task 27
    int array[] = { 1, 0, 0, 3, 0, 0, 0, 5, 0, 0, 0, 0, 2 };
    int length = sizeof(array) / sizeof(array[0]);
    int new_length;

    int* compressed = compress(array, length, &new_length);
    if (!compressed) {
        printf("Error: memory allocation failed\n");
        return 1;
    }

    printf("Compressed array: ");
    for (int i = 0; i < new_length; i++) {
        printf("%d ", compressed[i]);
    }
    free(compressed);
#endif
    return 0;
}
