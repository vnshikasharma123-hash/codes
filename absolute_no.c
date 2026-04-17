#include <stdio.h>

int absolute(int n) {
    return (n < 0) ? -n : n;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Absolute value = %d\n", absolute(num));
    return 0;
}
