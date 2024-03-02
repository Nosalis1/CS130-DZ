#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define TASK_12
#define TASK_27

typedef unsigned int u_int32;   // type declaration
typedef unsigned long long size_t;    // type declaration

#ifdef TASK_27

void remove_zeros(char *string) {
    size_t len = strlen(string);    // variable declaration

    size_t i = len - 1;    // variable declaration
    while (string[i] == '0') {    // loop
        string[i] = '\0';    // storing value
        i--;    // decrementing
    }
}

#endif

int main() {
#ifdef TASK_12
    // Task 12

    srand(time(NULL));  // seeding random number

    u_int32 n = 0;    // variable declaration

    printf("Enter number: ");    // printing message
    scanf_s("%u", &n);    // reading number

    u_int32 A[n];    // array declaration
    for (u_int32 i = 0; i < n; i++) {    // loop
        A[i] = rand() % 100;    // generating random number
    }

    printf("\nA: [");    // printing message
    for (u_int32 i = 0; i < n; i++) {    // loop
        printf("%u ", A[i]);    // printing value
    }
    printf("]\n");    // printing message

    u_int32 B[n];    // array declaration
    u_int32 C[n];    // array declaration
    u_int32 ib = 0, ic = 0;    // variable declaration
    for (u_int32 i = 0; i < n; i++) {    // loop
        if (A[i] < 50) {
            B[ib] = A[i];    // storing value
            ib++;    // incrementing
            continue;    // continue
        }
        C[ic] = A[i];    // storing value
        ic++;    // incrementing
    }

    printf("B: [");    // printing message
    for (u_int32 i = 0; i < ib; i++) {    // loop
        printf("%u ", B[i]);    // printing value
    }

    printf("]\nC: [");    // printing message
    for (u_int32 i = 0; i < ic; i++) {    // loop
        printf("%u ", C[i]);    // printing value
    }
    printf("]\n");
#endif
#ifdef TASK_27
    // Task 27
    char string[] = "215501240000";    // variable declaration
    printf("Before removing zeros: %s\n", string);    // printing message
    remove_zeros(string);    // function call
    printf("After removing zeros: %s\n", string);    // printing message
#endif
    return 0;
}
