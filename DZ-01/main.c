#include <stdio.h>

#define TASK_12
#define TASK_27

int main() {
    typedef unsigned int u_int32;   // type declaration

#ifdef TASK_12
    // Task 12
    u_int32 value = 0; // variable declaration
    printf("Enter value in RSD: "); // message
    scanf_s("%u", &value);  // input

    u_int32 count_500 = value / 500;    // calculating count of 500
    u_int32 count_100 = (value % 500) / 100;    // calculating count of 100
    u_int32 count_1 = (value % 500) % 100;  // calculating count of 1

    printf("500 RSD: %u\n", count_500);    // printing count of 500
    printf("100 RSD: %u\n", count_100);    // printing count of 100
    printf("1 RSD: %u\n", count_1);    // printing count of 1
#endif
#ifdef TASK_27
    // Constants
#define DAYS_PER_YEAR 365    // days per year constant
#define HOURS_PER_YEAR (DAYS_PER_YEAR * 24)    // hours per year constant
#define HOURS_PER_DAY 24    // hours per day constant

    // Task 27
    u_int32 hours = 0; // variable declaration
    printf("Enter hours: "); // message
    scanf_s("%u", &hours);  // input

    u_int32 years = hours / HOURS_PER_YEAR;    // calculating years
    u_int32 days = (hours % HOURS_PER_YEAR) / HOURS_PER_DAY;    // calculating days

    printf("Years: %u\n", years);    // printing years
    printf("Days: %u\n", days);    // printing days
#endif
    return 0;
}