#include <stdio.h>

int main()
{
    int a;
    char b;
    char c;
    char d;
    char e;
    int f;
    char g;
    char h;
    char j;
    printf ("quale é la tua eta? :\n");
    scanf ("%d", &a);
    printf ("la tua eta e: %d\n",a); 
    
    printf ("inserisci M se sei maschio F se sei femmina:\n");
    scanf (" %c", &b);
    printf ("il tuo sesso e: %c\n",b);
    
    printf ("inserisci I se sei italiano/a S se sei straniero/a:\n");
    scanf (" %c", &d);
    printf ("sei di provienienza: %c\n", d);
    
    printf ("inserisci R se sei di roma o C se la citta e un altra:\n");
    scanf (" %c", &e);
    printf ("sei di: %c\n", e);
    
    printf ("inserisci la tua altezza:\n");
    scanf (" %d", &f);
    printf ("sei alto: %dcm\n", f);
    
    printf ("inserisci N se hai i capelli neri oinserisci B se hai i capelli biondi o inserisci O se hai i capelli rossi:\n");
    scanf (" %c", &g);
    
    if (g=='N')
    { 
    printf("i tuoi capelli sono neri\n");
    }
    else if (g=='B')
    {
    printf ("i tuoi capelli sono biondi\n");
    }
    else if (g=='O')
    {
    printf ("ituoi capelli sono rossi\n");
    }
    else
    {
    printf ("lettera non valida\n");
    }

    printf ("inserisci P se vai ad una scuola publica o T privata? :\n");
    scanf ("%c", &h);
    printf ("la tua la tua scuola e: %d\n", h);
    if (h=='P')
    { 
    printf("la scuola e publica\n");
    }
    else if (h=='T')
    {
    printf ("la scuola e privata\n");
    }
    printf ("inserisci K se fumi invece H se no? :\n");
    scanf ("%c", &j);
    if (j=='F')
    {
    printf (" male, smetti =[\n");
    }
    else if (j=='H')
    {
    printf (" bravo =) \n");
    }
    

    
    return (0);
}