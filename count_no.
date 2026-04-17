#include <stdio.h>

void count(int n) {
    int num, pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &num);
        if (num > 0) pos++;
        else if (num < 0) neg++;
        else zero++;
    }
    printf("Positive = %d\nNegative = %d\nZeros = %d\n", pos, neg, zero);
}

int main() {
    int N;
    printf("Enter how many numbers: ");
    scanf("%d", &N);
    count(N);
    return 0;
}
