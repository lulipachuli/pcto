#include <stdio.h>

int main ()
{
    int a;
    int b;
    printf ("inserisci due numeri: \n");
    scanf ("%d %d", &a, &b);
    printf ("a: %d\n b: %d\n", a, b);
    if (a>b)
    {
     printf ("a è maggiore di b sempre\n");
    }
    else if ( a==b)
    {
     printf("a è uguale a b sempre\n");
    }
    else 
    {
     printf ("a minore di b\n");
    }
    
}