#include <stdio.h>

void check_leap(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("%d is a Leap Year\n", year);
    else
        printf("%d is Not a Leap Year\n", year);
}

int main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    check_leap(year);
    return 0;
}
