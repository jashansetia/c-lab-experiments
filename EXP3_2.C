#include <stdio.h>
int main()
{
    float BMI,wt,h;
    printf("enter weight in kgs = ");
    scanf("%f",&wt);
    printf("enter height in mts = ");
    scanf("%f",&h);
    BMI=wt/(h*h);
    printf("BMI = %f \n",BMI);
    if(BMI>0){
        if(BMI<15){
            printf("starvation");
        }else if(BMI<17.5){
            printf("anorexic");
        }else if(BMI<18.5){
            printf("underweight");
        }else if(BMI<24.9){
            printf("ideal");
        }else if(BMI<25.9){
            printf("overweight");
        }else if(BMI<39.5){
            printf("obese");
        }
    }else{
        printf("morbidity obese");
    }
        
}