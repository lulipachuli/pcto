#include <stdio.h>

int main ()
{
    int a;
    int b;
    printf ("inserisci due numeri: \n");
    scanf ("%d %d", &a, &b);
    printf ("a: %d\n b: %d\n", a, b);
    if (a%b==0)
    {
     printf ("a è multiplo di b \n");
    }
    else 
    {
     printf ("a non è multiplo di b\n");
    }
    
}