#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[30];
    int i;

    printf("write the UPPERSASE Word\n");
    scanf("%s", &str);
    for(i = 1;i <= strlen(str);i++)
    {
        if(str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
    }
    //ascii = upper + 32;
    printf("The Lower case is: %s\n", str);
    return 0;
}
