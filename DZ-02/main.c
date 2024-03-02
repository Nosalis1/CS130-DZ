#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TASK_15
#define TASK_29

typedef unsigned int u_int32;   // type declaration

#ifdef TASK_29

// Constants
#define TRUE 1
#define FALSE 0

typedef int bool;    // type declaration

bool is_sum_even(u_int32 value) {
    u_int32 sum = 0;
    do {
        sum += value % 10;    // incrementing sum
        value /= 10;    // decrementing value
    } while (value % 10 != 0);
    return sum % 2 == 1;    // returning result
}

#endif

int main() {
#ifdef TASK_15
    // Task 15
    u_int32 value = 0;
    u_int32 count = 0;

    srand(time(NULL));    // seeding random number

    do {
        value = rand() % 1000;    // generating random number between 0 and 999
        count++;
        printf("Value: %u\n", value);
    } while (count < 1000 || value == 500);

#endif
#ifdef TASK_29
    // Task 29
    printf("Sum of odd digits: 123456789 is %s\n", is_sum_even(123456789) == FALSE ? "odd" : "even");
#endif
    return 0;
}
