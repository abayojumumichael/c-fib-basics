#include "fib.h"

int fibcalc(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0;
    int b = 1;

    for (int i = 2; i <= n; i++) {
        int tmp = b + 2 * a;
        a = b;
        b = tmp;
    }
    return b;
}
