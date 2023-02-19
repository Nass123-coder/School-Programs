#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int A[100], i = 1, sum = 0;
    float avg;
    time_t *timer;
    srand(time(timer));
    printf("The random numbers from 1 to 100 are:\n");
    do
    {
        A[i] = 1 + rand() % 100;
        printf("%d \t", A[i]);
        sum += A[i];
        i++;
    }while(i <= 100);
    avg = sum / 100.0;
    printf("\nAverage of the random numbers = %.2f\n", avg);
    return 0;
}
