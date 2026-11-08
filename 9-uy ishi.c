#include <stdio.h>
int main()
{
     int i, sum = 0;

    for(i = 1; i <= 50; i++) {
        if(i % 3 != 0) {
            continue;
        }

        sum += i;
    }

    printf("Yigindi = %d", sum);
     return 0;
}