#include <stdio.h>
int main()
{
    int l,b,area,perimeter;
    printf("enter length = ");
    scanf("%d",&l);
    printf("enter breadth = ");
    scanf("%d",&b);
    perimeter = 2*l + 2*b;
    area=l*b;
    printf("area = %d",area);
    printf("\nperimeter = %d",perimeter);
    return 0;
}