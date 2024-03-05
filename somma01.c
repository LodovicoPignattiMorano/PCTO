#include <stdio.h>

int main()
{
    int num1, num2;
    
    printf ("inserisci un primo numero:\n");
    scanf ("%d", &num1);
    printf ("inserisci un secondo numero:\n");
    scanf ("%d", &num2);
    int somma=num1+num2;
    printf ("%d", somma);
}