#include "print_fib.h"
#include "fib.h"
#include <stdio.h>

int n;

void print_fib() {
    printf("Length? ");
    scanf("%d", &n);
    printf("[");
    for (int i = 0; i < n; i++) {
        if (i != n - 1) {
            printf("%d, ", fibcalc(i));
        } else {
            printf("%d", fibcalc(i));
        }
    }
    printf("]");
}