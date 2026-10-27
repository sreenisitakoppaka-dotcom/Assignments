#include <stdio.h>

int main() {
    double number;

    
    printf("Enter a number: ");
    scanf("%lf", &number);

  
    if (number > 0.0) {
        printf("%.2lf is a positive number.\n", number);
    } 
    else if (number < 0.0) {
        printf("%.2lf is a negative number.\n", number);
    } 
    else {
        printf("The number is zero.\n", number);
    }

    return 0;
}
