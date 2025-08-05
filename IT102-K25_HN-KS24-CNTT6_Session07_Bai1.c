#include<stdio.h>
int main() {
    int n, even_count = 0, odd_count = 0, i;
    printf("Nhap so nguyen n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            even_count++;
        }else {
            odd_count++;
        }
    }
    printf("Tu 1 -> %d co %d so chan\n", n, even_count);
    printf("Tu 1 -> %d co %d so le", n, odd_count);
    return 0;
}