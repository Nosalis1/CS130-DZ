#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TASK_15
#define TASK_29

typedef unsigned int u_int32;   // type declaration

#ifdef TASK_29

#define TRUE 1    // constant
#define FALSE 0    // constant

typedef int bool;    // type declaration

bool sum_odd(u_int32 value) {
    u_int32 sum = 0;    // variable declaration
    do {
        sum += value % 10;    // incrementing sum
        value /= 10;    // decrementing value
    } while (value % 10 != 0);  // loop condition
    return sum % 2 == 1;    // returning result
}

#endif

int main() {
#ifdef TASK_15
    // Task 15
    u_int32 value = 0; // variable declaration
    u_int32 count = 0; // variable declaration

    srand(time(NULL));    // seeding random number

    do {
        value = rand() % 1000;    // generating random number
        count++;    // incrementing count
        printf("Value: %u\n", value);    // printing value
    } while (count < 1000 || value == 500); // loop condition

#endif
#ifdef TASK_29
    // Task 29
    printf("Sum of odd digits: 123456789 is %s\n", sum_odd(123456789) == TRUE ? "odd" : "even");
#endif
    return 0;
}
