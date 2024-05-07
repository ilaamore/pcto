#include <stdio.h>

int main()
{
    int a = 20;
    
    scanf("%d", & a);
    if (a>18 && a<30)
    {
        printf("è giovane");
    }
    else if (a>60 && a<100)
    {
        printf("è vecchio");
    }
}