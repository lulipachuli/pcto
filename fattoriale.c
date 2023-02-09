#include <stdio.h>

int main ()
{
    int x;
    printf("inserisci un numero intero: \n");
    scanf("%d \n", &x);
    int y = 1;
    
    while (x>0)
    {
        y = x * y;
        x = x - 1;
    }
    printf("%d \n", y);
}