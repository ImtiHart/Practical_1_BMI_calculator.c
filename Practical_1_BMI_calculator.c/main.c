#include <stdio.h>
#include <stdlib.h>

/*Initialize variables*/
float weight;
float height;

/*Create a calculation for your BMI level*/
float calculate()
{
    float height_m= height*height;
    float BMI = weight/height_m;
    if (BMI<18.5){
        printf("You are underweight: %2f", BMI);
    }
    else if (BMI>18.5&&BMI<24.9){
        printf("You are normal weight: %2f", BMI);
    }
    else if (BMI>25&&BMI<29.9){
        printf("You are overweight: %2f", BMI);
    }
    else if (BMI>30){
        printf("You are obese: %2f", BMI);
    }

}

/*Ask user for weight and height. Then continue to calculate BMI*/
int main()
{
    printf("What is your weight in kilogram: \n");
    scanf("%f", &weight);
    printf("What is your height in meters: \n");
    scanf("%f", &height);
    calculate();
    return 0;
}
