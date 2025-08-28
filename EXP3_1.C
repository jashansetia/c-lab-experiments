#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter side 1 = ");
    scanf("%d",&a);
    printf("enter side 2 = ");
    scanf("%d",&b);
    printf("enter side 3 = ");
    scanf("%d",&c);

    if(a+b>c && a+c>b && b+c>a){
        if(a==b && b==c ){
            printf("equilateral triangle \n");
        }else if(a==b || b==c || c==a){
            printf("isosceles triangle \n");
        }else if(a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b){
            printf("right angle triangle \n");
        }else{
            printf("scalene \n");
        }
    }else{
        printf("not valid triangle");
    }
}