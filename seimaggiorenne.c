#include <stdio.h>

int main ()
{
    int eta;
    printf ("inserisci un'eta: \n");
    scanf ("%d", &eta); 
    printf ("eta: %d\n", eta);
    if (eta>18)
    {
     printf ("l'utente è maggiorenne\n");
    }
    else if ( eta<18)
    {
     printf("l'utente è minorenne\n");
    }
    
    
}

