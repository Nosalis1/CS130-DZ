#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TASK_7
#define TASK_27

typedef unsigned long long size_t;    // type declaration

#ifdef TASK_7

void sum_divisors(int n, int *sum) {
    *sum = 0;    // variable declaration
    for (int i = 1; i <= n / 2; i++) {    // loop
        if (n % i == 0) {    // condition
            *sum += i;    // incrementing
        }
    }
}

#endif

#ifdef TASK_27

char *separate_substring(const char *string, const char *substring) {
    const char *begin_substring = strstr(string, substring);    // function call

    if (begin_substring == NULL) {
        return NULL;    // condition
    }

    size_t length = begin_substring - string;    // variable declaration
    char *result = malloc((length + 1) * sizeof(char));    // variable declaration

    if (result == NULL) {
        return NULL;    // condition
    }

    strncpy(result, string, length);    // function call
    result[length] = '\0';    // function call

    return result;    // function call
}

#endif

int main() {
#ifdef TASK_7
    // Task 7

    int n;    // variable declaration
    printf("Enter a number: ");    // printing message
    scanf_s("%d", &n);    // input

    for (int i = 1; i <= n; i++) {    // loop
        int sum = 0;    // variable declaration
        sum_divisors(i, &sum);    // function call
        printf("Sum of divisors of %d is %d\n", i, sum);    // printing message
    }
#endif
#ifdef TASK_27
    // Task 27
    const char *string = "The quick brown fox jumps over the lazy dog";    // variable declaration
    const char *substring = "fox";    // variable declaration

    printf("String: %s\n", string);    // printing message
    printf("Substring: %s\n", substring);    // printing message

    char *result = separate_substring(string, substring);    // function call
    if (result == NULL) {
        printf("Substring not found\n");    // printing message
    } else {
        printf("Substring found: %s\n", result);    // printing message
        free(result);    // function call
    }
#endif
    return 0;
}
