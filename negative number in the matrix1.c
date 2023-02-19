#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numb, i, j, point = 0;
    int a[2][2];
    printf("Enter the values\n");
    for(i=0;i < 2;i++)
    {
        for(j=0;j < 2;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j] < 0)
            {
                point = point +1;
            }
        }
    }
    printf("There are %d negative numbers in the matrix\n",point);
    return 0;
}
