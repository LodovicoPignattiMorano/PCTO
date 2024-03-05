#include <stdio.h>

int main()
{
    int a;
     printf("se vuoi sapere se il numero è pari inserisci T \n");
     scanf ("%c", &a);
    if (a=='T')
    {
        printf ("inserisci un numero\n");
        scanf("%d", &a);
    }
}
