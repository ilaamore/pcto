#include <stdio.h>

int main()

{
    int a;
    int b = 1969;

    printf("inserisci anno di nascita");
    scanf("%d", &a);

    if(a == b)
    {
        printf("è nato lo stesso anno in cui l'uomo è andato sulla luna");
    }

    else if(a<b)
    {
        printf("è nato %d", 1969 - a);
        printf("anni prima che l'uomo andasse sulla luna" );
    }

    else
    {
        printf("è nato %d", a - 1969);
        printf("anni dopo che l'uomo è andato sulla luna ");
    }
}