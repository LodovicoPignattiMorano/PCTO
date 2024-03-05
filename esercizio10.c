#include <stdio.h>

int main ()

{ 
int a;
int b;
int c;
    printf ("scrivi il primo numero\n");
    scanf ("%d",&a);
    printf ("scrivi il secondo numero\n");
    scanf ("%d",&b);
    printf ("inserici il terzo numero\n");
    scanf ("%d", &c);
     if (a-b==b-c)
     {
        printf ("bravo =) =) \n");
     }
     else
     { 
printf ("peccato =( =( =( \n");
     }
return (0);
}
