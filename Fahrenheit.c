#include <stdio.h>
/* print Fahrenheit-Celsius table */
int main(void)

{
    int fahr;

    fahr = -50;
    while (fahr <= 120)

{
        printf("f: %3d  c: %6.1f\n" ,fahr, (5.0/9.0)*(fahr-32));
        fahr = fahr +5;
}
}