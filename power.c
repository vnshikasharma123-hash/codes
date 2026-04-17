#include <stdio.h>

int power(int a, int b) {
    int result = 1;
    for (int i = 1; i <= b; i++) result *= a;
    return result;
}

int main() {
    int A, B;
    printf("Enter base and exponent: ");
    scanf("%d %d", &A, &B);
    printf("%d^%d = %d\n", A, B, power(A, B));
    return 0;
}
