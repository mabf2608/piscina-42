#include <stdio.h>

int main(void)
{
    printf("Hola Mundo\n");
    int a;
    int b;

    a = 1;
    b = 3;

    while (a < 10)
    {
            printf("%d\n",b*a);
            a++;
    }
    
    return 0;
}
