#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j, sum = 0;
    int m[3][3];
    printf("Enter the values\t");
    for(i=0;i < 3;i++)
    {
        for(j=0;j < 3;j++)
        {
            scanf("%d",&m[i][j]);
            if(i == j)
            {
                sum = sum + m[i][j];
            }
        }
    }
    printf("The Sum of the diagonal elements is:%d",sum);
    return 0;
}
