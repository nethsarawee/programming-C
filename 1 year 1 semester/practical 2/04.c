#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C,F;

    printf ("Enter Temperature In Fahrenheit ");
    scanf ("%f", &F);
    C=(5.0/9.0)*(F-32);

    printf ("%f", C);


    return 0;
}
