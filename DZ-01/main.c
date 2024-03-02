#include <stdio.h>

#define TASK_12
#define TASK_27

int main() {
    typedef unsigned int u_int32; // 32-bit unsigned integer

#ifdef TASK_12
    // Task 12

    // Take input
    u_int32 value = 0;
    printf("Enter value in RSD: ");
    scanf_s("%u", &value);

    // Conversion
    u_int32 count_500 = value / 500;
    u_int32 count_100 = (value % 500) / 100;
    u_int32 count_1 = (value % 500) % 100;

    // Output
    printf("500 RSD: %u\n", count_500);
    printf("100 RSD: %u\n", count_100);
    printf("1 RSD: %u\n", count_1);
#endif
#ifdef TASK_27
    // Constants
#define DAYS_PER_YEAR 365
#define HOURS_PER_YEAR (DAYS_PER_YEAR * 24)
#define HOURS_PER_DAY 24

    // Task 27

    // Take input
    u_int32 hours = 0;
    printf("Enter hours: ");
    scanf_s("%u", &hours);

    // Conversion
    u_int32 years = hours / HOURS_PER_YEAR;
    u_int32 days = (hours % HOURS_PER_YEAR) / HOURS_PER_DAY;

    // Output
    printf("Years: %u\n", years);
    printf("Days: %u\n", days);
#endif
    return 0;
}