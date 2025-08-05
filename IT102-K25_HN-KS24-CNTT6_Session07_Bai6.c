#include <stdio.h>
int main() {
    int n, reversed = 0, original, digit;
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Khong hop le");
        return 0;
    }
    original = n;
    while (n > 0) {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    printf("So dao nguoc cua %d la %d", original, reversed);
    return 0;
}