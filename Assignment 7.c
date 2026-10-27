#include <stdio.h>

int main() {
    int mark;

  
    printf("Enter the student's mark (out of 100): ");
    if (scanf("%d", &mark) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    
    if (mark < 0 || mark > 100) {
        printf("Invalid mark\n");
    } 
    
    else if (mark >= 90 && mark <= 100) {
        printf("Grade: O\n");
    } 
    else if (mark >= 80 && mark <= 89) {
        printf("Grade: A+\n");
    } 
    else if (mark >= 70 && mark <= 79) {
        printf("Grade: A\n");
    } 
    else if (mark >= 60 && mark <= 69) {
        printf("Grade: B\n");
    } 
    else if (mark >= 50 && mark <= 59) {
        printf("Grade: C\n");
    } 
    else {
        printf("Grade: Fail\n");
    }

    return 0;
}
