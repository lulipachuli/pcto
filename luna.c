#include <stdio.h>

int main ()
{ 
    
    int b;
    printf("inserisci un numero \n");
    scanf("%d", &b);
    printf("b: %d\n", b);
    if (b == 1969)
    {
        printf("l'utente è nato lo stesso anno del primo uomo sulla luna \n");
    }
    else   
    {
        printf("l'utente non è nato nel 1969 \n");
        if (1969 - b > 0)
        {
            printf ("l'utente è nato %d anni prima del 1969 \n", 1969 - b);
        }
        else 
        {
            printf("lútente è nato %d anni dopo il  1969 \n", b - 1969);
        }
    }

}