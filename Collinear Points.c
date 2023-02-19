#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3;
    float area;
    printf("Enter the 1st coordinates:\n");
    scanf("%d %d", &x1, &y1);
    printf("Enter the 2nd coordinates:\n");
    scanf("%d %d", &x2, &y2);
    printf("Enter the 3rd coordinates:\n");
    scanf("%d %d", &x3, &y3);
    printf("The 1st coordinates are: (%d , %d)\n", x1,y1);
    printf("The 2nd coordinates are: (%d , %d)\n", x2,y2);
    printf("The 3rd coordinates are: (%d , %d)\n", x3,y3);
    area = 0.5*fabs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    printf("The Area is: %1.f", area);
    if(area == 0)
    {
        printf("\nthe points are collinear");
    }
    else
    {
        printf("\nThe points are not collinear");
    }
    return 0;
}
