#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i,j;
    float a[150], temp;
    for(i = 0; i < 100; i++)
    {
        a[i] = 10.0 + rand() / 100.0;
    }
    printf("The generated 100 random real numbers : \n\n");
    for(i = 0; i < 100; i++)
    {
        printf("%.2f \t", a[i]);
    }
    for(i = 0; i < 100; i++)
    {
        for(j = 0; j < 100; j++)
        {
            if(a[j] < a[j+1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("\n\nThe generated 100 random real numbers in descending order : \n\n");
    for(i = 0; i < 100; i++)
    {
        printf("%.2f \t", a[i]);
    }
    return 0;
}
