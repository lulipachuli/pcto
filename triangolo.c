#include <stdio.h>

int main ()
{
    int a;
    int b;
    int c;
    printf("inserisci tre numeri: \n");
    scanf ("%d %d %d", &a, &b, &c);
    printf("a: %d\n b: %d\n c: %d\n", a, b, c);
    if (a +b > c && b + c > a && a + c > b) 
    {
      printf("è un triangolo \n");
        if (a == b && a != c)
        {
            printf ("è un triangolo isoscele \n");
        }
        if (a != b && b != c && a != c)
        {
            printf("è un triangolo scaleno \n");
        }
        if (a == b && b == c && a == c)
        { 
            printf("è un triangolo equilatero \n");
        }
    }
    else 
    {
        printf ("non è un triangolo \n");
    }

}