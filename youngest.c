#include <stdio.h>

void youngest(int r, int s, int a) {
    if (r <= s && r <= a)
        printf("R %d\n", r);
    else if (s <= r && s <= a)
        printf("S %d\n", s);
    else
        printf("A %d\n", a);
}

int main() {
    int ram, shyam, ajay;
    printf("Enter ages of Ram, Shyam, Ajay: ");
    scanf("%d %d %d", &ram, &shyam, &ajay);
    youngest(ram, shyam, ajay);
    return 0;
}
