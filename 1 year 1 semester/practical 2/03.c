#include <stdio.h>
#include <stdlib.h>

int main()
{
    float speed,distance,time;

        printf("Enter Your Distance: ", distance);
        scanf ("%f,", &distance);

        printf("Enter Your Time: ", time);
        scanf("%f", &time);

        speed=distance/time;

        printf("Your Average Speed Is %f ms-1", speed);

    return 0;
}

