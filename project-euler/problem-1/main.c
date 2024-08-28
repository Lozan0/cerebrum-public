/*If we list all the natural numbers below 10 that are multiples of 3 or 5, 
we get 3,5,6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    int n=0;
    for (i = 1; i < 1000; i++)
    {
        int multiplo = 0;

        //printf("i: %d \n", i);

        if (i%3 == 0 || i%5 == 0)
        {
            printf("%d es multiplo de 3 o 5 \n", i);
            n = n+i;
        }


    }

    printf("la suma es: %d \n",n);
    

    return 0;
}
