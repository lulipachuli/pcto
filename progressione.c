#include <stdio.h>

int main ()
{ 
    int a;
    int b;
    int c;
    printf ("inserisci tre numeri: \n");
    scanf("%d %d %d", &a, &b, &c);
    printf("a: %d\n b: %d\n c: %d\n", a, b, c);
    if (b - a == c - b)
    {
       printf("è una progressione aritmetica \n");
    }
    else
    {
        printf("non è una progressione aritmetica \n");
    }
}