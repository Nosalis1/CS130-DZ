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
    size_t len = strlen(string);

    size_t i = len - 1;
    while (string[i] == '0') {
        string[i] = '\0';    // storing value
        i--;    // decrementing
    }
}

#endif

int main() {
#ifdef TASK_12
    // Task 12

    srand(time(NULL));  // seeding random number

    u_int32 n = 0;

    printf("Enter number: ");
    scanf_s("%u", &n);

    u_int32 A[n];
    for (u_int32 i = 0; i < n; i++) {
        A[i] = rand() % 100;    // generating random number
    }

    printf("\nA: [");
    for (u_int32 i = 0; i < n; i++) {
        printf("%u ", A[i]);
    }
    printf("]\n");

    u_int32 B[n];
    u_int32 C[n];
    u_int32 ib = 0, ic = 0;
    for (u_int32 i = 0; i < n; i++) {
        if (A[i] < 50) {
            B[ib] = A[i];    // storing value
            ib++;    // incrementing
            continue;
        }
        C[ic] = A[i];    // storing value
        ic++;    // incrementing
    }

    printf("B: [");
    for (u_int32 i = 0; i < ib; i++) {
        printf("%u ", B[i]);
    }

    printf("]\nC: [");
    for (u_int32 i = 0; i < ic; i++) {
        printf("%u ", C[i]);
    }
    printf("]\n");
#endif
#ifdef TASK_27
    // Task 27
    char string[] = "215501240000";
    printf("Before removing zeros: %s\n", string);
    remove_zeros(string);
    printf("After removing zeros: %s\n", string);
#endif
    return 0;
}
