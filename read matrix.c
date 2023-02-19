#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int p[3][4];
    printf("Enter the values of the matrix\n");
    for(i=0; i < 3;i++)
    {
        for(j=0;j < 4;j++)
        {
            scanf("%d",&p[i][j]);
        }
    }
    printf("The elements of the matrix are:\n");
    for(i=0; i < 3;i++)
    {
        for(j=0;j < 4;j++)
        {
            printf("%d\t",p[i][j]);
        }
    }
    return 0;
}
