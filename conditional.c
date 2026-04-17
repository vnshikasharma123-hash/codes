#include <stdio.h>

void operation(int a, int b) {
    if (a == 0 || b == 0)
        printf("Wrong Entry\n");
    else if (a > b)
        printf("Multiplication = %d\n", a * b);
    else if (b > a)
        printf("Addition = %d\n", a + b);
    else
        printf("Subtraction = %d\n", a - b);
}

int main() {
    int A, B;
    printf("Enter two numbers: ");
    scanf("%d %d", &A, &B);
    operation(A, B);
    return 0;
}
