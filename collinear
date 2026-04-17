#include <stdio.h>

void check_collinear(int x1, int y1, int x2, int y2, int x3, int y3) {
    if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1))
        printf("Points are collinear\n");
    else
        printf("Points are not collinear\n");
}

int main() {
    int x1, y1, x2, y2, x3, y3;
    printf("Enter three points (x y): ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    check_collinear(x1, y1, x2, y2, x3, y3);
    return 0;
}
