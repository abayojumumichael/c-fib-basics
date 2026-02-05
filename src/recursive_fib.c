#include "fib.h"

int fibcalc(int n) {
    switch (n) {
        case 0:
            return 0;
            break;
        case 1:
            return 1;
            break;
        default:
            return fibcalc(n-1) + 2 * fibcalc(n-2);
    }
}