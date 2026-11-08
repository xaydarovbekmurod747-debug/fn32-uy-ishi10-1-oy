#include <stdio.h>
int main()
{
     int son = 7;
    int n, i;

    for(i = 1; i <= 5; i++) {
        printf("Sonni toping: ");
        scanf("%d", &n);

        if(n == son) {
            printf("Tabriklaymiz, topdingiz!\n");
            break;
        }
        else {
            printf("Notogri, qayta urinib koring!\n");
        }
    }

    if(i > 5) {
        printf("Maxfiy son: %d", son);
    }
     return 0;
}