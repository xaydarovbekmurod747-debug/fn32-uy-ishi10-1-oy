#include <stdio.h>
int main()
{
     int i, n;

    for(i = 1; i <= 10; i++) {
        printf("Son kiriting: ");
        scanf("%d", &n);

        if(n < 0) {
            break;
        }

        printf("Kiritilgan son: %d\n", n);
    }
     return 0;
}