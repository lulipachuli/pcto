#include <stdio.h>

int main ()
{
    float celsius;
    float fahrenheit;
    float kelvin;
    printf ("inserisci un numero: \n");
    scanf ("%f", &celsius);
    printf ("celsius: %f\n", celsius);
    if (celsius < -273.15)
    {
     printf ("errore\n");
    }
    else 
    {
        fahrenheit = (9/5) * celsius + 32;
        kelvin = celsius + 273.15;
     printf ("fahrenheit: %f\n kelvin: %f\n ", fahrenheit, kelvin);

    }
    
}