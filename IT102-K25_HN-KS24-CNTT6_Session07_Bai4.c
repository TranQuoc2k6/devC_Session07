#include <stdio.h>
    int main() {
        int m, n;
        printf("Nhap chieu dai m: ");
        scanf("%d", &m);
        printf("Nhap chieu rong n: ");
        scanf("%d", &n);


        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                printf("* ");
            }
            printf("\n");
        }
        return 0;

        // for (int i = 1; i <= a; i++) {
        //     for (int j = 1; j <= a - i; j++) {     // Nhap 1 canh bat ky cua mot hinh tam giac
        //         printf("* ");
        //     }
        //     printf("\n");
        // }
    }





