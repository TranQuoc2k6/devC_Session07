#include<stdio.h>
int main() {
    int n, x, count = 0;
    printf("Nhap so nguyen n:");
    scanf("%d", &n);
    printf("Nhap mot chu so (0-9):");
    scanf("%d", &x);
    int original = n;
    if (x < 0 || x > 9) {
        printf("x khong hop le");
    }
    if (n < 0) {
        n = -n;
    }

    while (n > 0) {
        if (n % 10 == x) {
            count++;
        }
        n /= 10;
    }
    printf("Chu so %d xuat hien %d lan trong so %d", x, count, original);
    return 0;
}