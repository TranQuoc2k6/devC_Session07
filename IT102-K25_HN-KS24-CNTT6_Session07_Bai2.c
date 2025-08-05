#include<stdio.h>
int main() {
    int n, i, factorial = 1;
        printf("Nhap vao so nguyen duong n:");
        scanf("%d", &n);
        for (i=1; i <= n; i++) {
            factorial *= i;
        }
        printf("Giai thua cua %d la: %d\n",n, factorial);

    return 0;
}