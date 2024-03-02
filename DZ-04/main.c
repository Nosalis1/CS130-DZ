#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TASK_7
#define TASK_27

typedef unsigned long long size_t;    // type declaration

#ifdef TASK_7

void sum_divisors(int n, int *sum) {
    *sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            *sum += i;    // incrementing
        }
    }
}

#endif

#ifdef TASK_27

char *separate_substring(const char *string, const char *substring) {
    const char *begin_substring = strstr(string, substring);

    if (begin_substring == NULL) {
        return NULL;    // condition
    }

    size_t length = begin_substring - string;
    char *result = malloc((length + 1) * sizeof(char));

    if (result == NULL) {
        return NULL;
    }

    strncpy(result, string, length);
    result[length] = '\0';

    return result;
}

#endif

int main() {
#ifdef TASK_7
    // Task 7

    int n;
    printf("Enter a number: ");
    scanf_s("%d", &n);    // input

    for (int i = 1; i <= n; i++) {
        int sum = 0;
        sum_divisors(i, &sum);    // function call
        printf("Sum of divisors of %d is %d\n", i, sum);
    }
#endif
#ifdef TASK_27
    // Task 27
    const char *string = "The quick brown fox jumps over the lazy dog";
    const char *substring = "fox";

    printf("String: %s\n", string);
    printf("Substring: %s\n", substring);

    char *result = separate_substring(string, substring);    // function call
    if (result == NULL) {
        printf("Substring not found\n");
    } else {
        printf("Substring found: %s\n", result);
        free(result); // freeing the memory
    }
#endif
    return 0;
}
