#include <stdio.h>

int sum() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) sum += i;
    return sum;
}

int main() {
    printf("Sum of first 100 natural numbers = %d\n", sum());
    return 0;
}
