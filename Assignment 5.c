#include <stdio.h>

int main() {
    int age;
    double income;
    int credit_score;

  
    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter monthly income (in ₹): ");
    scanf("%lf", &income);

    printf("Enter credit score: ");
    scanf("%d", &credit_score);

    
    if (age < 21 || age > 60) {
        printf("Loan rejected: age not in 21 to 60\n");
    } else {
        if (income < 25000) {
            printf("Loan rejected: income below ₹25,000\n");
        } else {
            if (credit_score < 700) {
                printf("Loan rejected: credit score below 700\n");
            } else {
                printf("Loan approved\n");
            }
        }
    }

    return 0;
}
