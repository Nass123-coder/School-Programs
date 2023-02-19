#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numb, i, j;
    int a[2][2],b[0][2];
    printf("Kindly Enter the Values\n");
    for(i=0;i < 2;i++)
    {
        for(j=0;j < 2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
            numb = a[0][i];
            a[0][i] = a[1][i];
            a[1][i] = numb;
    }
    printf("the reverse is:\n");
    for(i=0;i < 2;i++)
    {
        for(j=0;j < 2;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }

    return 0;
}
