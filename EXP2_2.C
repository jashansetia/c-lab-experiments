#include <stdio.h>
int main()
{
   float C,F;
   printf("enter temp. in celcious = ");
   scanf("%f",&C);
   F=(C*9/5)+32;
   printf("temp in fahrenheit = %f",F);
    return 0;
}