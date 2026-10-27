#include <stdio.h>

int main() {
    float weight, height, bmi;

    
    printf("Enter weight in kg: ");
    scanf("%f", &weight);

    printf("Enter height in meters: ");
    scanf("%f", &height);

    
    bmi = weight / (height * height);

    
    printf("\nBMI Value: %.2f\n", bmi);

    
    if (bmi < 18.5) {
        printf("Category: Underweight\n");
    } 
    else if (bmi >= 18.5 && bmi < 25.0) {
        printf("Category: Normal\n");
    } 
    else if (bmi >= 25.0 && bmi < 30.0) {
        printf("Category: Overweight\n");
    } 
    else {
        printf("Category: Obese\n");
    }

    return 0;
}
