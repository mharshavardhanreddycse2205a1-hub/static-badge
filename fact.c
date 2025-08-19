#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0)
        return 1;
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num = 5;
    printf("Factorial of %d is %llu\n", num, factorial(num));
    return 0;
}
