#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numb, i, j, point = 0;
    int a[2][2];
    printf("Enter the values");
    for(i=0;i < 2;i++)
    {
        for(j=0;j < 2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the number you want to find\n");
    scanf("%d",&numb);
    for(i=0;i < 2;i++)
    {
        for(j=0;j < 2;j++)
        {
            if(numb == a[i][j])
            {
                 point = 1;
            }
        }
    }
    if(point == 1)
    {
        printf("The number has been found\n");
    }
    else
    {
        printf("Number not there");
    }
    return 0;
}


