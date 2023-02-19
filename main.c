#include <stdio.h>
#include <stdlib.h>

/* Program for addition of two matrics*/
/* Here in the program the "\n" is to tell the computer that I want the next instruction to the in the following line
    And the "\t" is to keep a gap between two elements on the same line*/

int main()
{
    //Declaration of variables

    int m,n,i,j,k,l;

    //Here a is the first matrix, b the second matrix and sum the matrix sum.

    int a[100][100],b[100][100],sum[100][100];
    printf("Enter the number of rows\n");
    scanf("%d",&m);
    printf("Enter the number of columns\n");
    scanf("%d",&n);
    //Enter the elements of the matrix.
    /* To read the elements of the matrix i'm using for loop twice because i must repeat the action
    to fill all the elements*/

    printf("Enter the elements of the first matrix\n");
    for(i=0;i < m;i++)

        for(j=0;j < n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    /*This lines is to show the user the elemnet of the matrix that he Entered to check with the final sum*/
    printf("Elements of the first matrix are:\n");
    for(i=0;i < m;i++)

        for(j=0;j < n;j++)
        {
            printf("%d\t",a[i][j]);
            /* Here this line means that when The computer has finished writing the elements on the first line
                he goes to the following. When there s no more coloumns, when he finished reading the values of "J"
                This make the output looks more like a Matrix*/
                if (j == n - 1)
                {
                    printf("\n\n");
                }
        }
    /* Entering the elements of the second matrix */
    printf("\nEnter the elements of the second matrix\n");
    for(i=0;i < m;i++)
    {
        for(j=0;j < n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    /* Showing the elements of the second matrix*/
    printf("\nElements of the second matrix are:\n");
    for(i=0;i < m;i++)
    {
        for(j=0;j < n;j++)
        {
            printf("%d\t",b[i][j]);
                if (j == n - 1)
                {
                    printf("\n\n");
                }
        }
    }
    /* Making the sum of the two matrix and stocking it in the empty "sum" matrix declared earlier*/
   for(i=0;i < m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    /* Showing the final sum of the two matrix to the user*/
    printf("\nThe  matrix sum is:\n");
    for(i=0;i < m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",sum[i][j]);
             if (j == n - 1)
                {
                    printf("\n\n");
                }
        }
    }
    return 0;
}
// End of program
