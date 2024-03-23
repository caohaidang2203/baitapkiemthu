#include <stdio.h>
void check(int x, int y) {
    if (x >= 0 && x <= 15 && y >= 5 && y <= 25) {
        if (x + y <= 30) {
            printf("true\n");
        } else {
            printf("false\n");
        }
    } else {
        printf("invalid\n");
    }
}
int main() {
    int x, y;
    printf("Nhap gia tri cua x: ");
    scanf("%d", &x);
    printf("Nhap gia tri cua y: ");
    scanf("%d", &y);
    check(x, y);
    return 0;
}
