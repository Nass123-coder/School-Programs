#include <stdio.h>

int main()
{
    int reverse = 0, n, reminder;
    printf("Enter the number\t");
    scanf("%d", &n);
    while(n != 0)
    {
        reminder = n % 10;
        reverse = (reverse * 10) + reminder;
        n = n/10;
    }
    printf("The reverse of the number is:\t%d", reverse);

    return 0;
}


