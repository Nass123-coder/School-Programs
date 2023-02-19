#include <stdio.h>

int main()
{
    int sum = 0, n, reminder;
    printf("Enter the number\t");
    scanf("%d", &n);
    while(n != 0)
    {
        reminder = n % 10;
        sum = sum + reminder;
        n = n/10;
    }
    printf("The sum of the digits is:\t%d", sum);

    return 0;
}


