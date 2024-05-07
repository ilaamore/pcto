#include <stdio.h>

int main()

{
    int a;
    int b = 18;

    printf("inserisci età");
    scanf("%d", &a);

    if (a>b)
    {
        printf("è maggiorenne");
    }
    else if (a == b)
    {
        printf("è maggiorenne");
    }
    else 
    {
        printf("è minorenne");
    }
}