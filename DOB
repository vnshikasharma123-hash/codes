#include <stdio.h>

struct date {
    int dd, mm, yy;
};

int main() {
    struct date dob;
    char month[12][4] = {
        "jan","feb","mar","apr","may","jun",
        "jul","aug","sep","oct","nov","dec"
    };

    printf("Enter DOB (day-month-year): ");
    scanf("%d-%d-%d", &dob.dd, &dob.mm, &dob.yy);

    printf("\nYour DOB is:\n");
    printf("%d/%d/%d\n", dob.dd, dob.mm, dob.yy);
    printf("%d/%s/%d\n", dob.dd, month[dob.mm - 1], dob.yy);

    return 0;
}
