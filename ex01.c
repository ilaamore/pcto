#include <stdio.h>

int main()
{
    float a;
    float b = 2;

    a = 5;
    printf("somma: %f\n", a+b);
    float differenza = a-b;
    printf("differenza %f\n", differenza);
    float divisione = a/b;
    printf("divisione: %f\n", divisione);
    float moltiplicazione = a*b;
    printf("moltiplicazione: %f\n", moltiplicazione);
    float sottrazione = b-a;
    printf("differenza: %f\n", sottrazione);
}