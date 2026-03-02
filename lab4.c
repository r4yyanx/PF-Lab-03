// Task 1
#include <stdio.h>
int main() {
    float attendance;
 
    printf("Enter attendance percentage: ");
    scanf("%f", & attendance);
 
    if (attendance >= 75) {
        printf("Eligible for Exam\n");
    } else {
        printf("Not Eligible for Exam");
    }
 
    return 0;
}
// Task 2
#include <stdio.h>
 
int main() {
    int units;
 
    printf("Enter total units consumed: ");
    scanf("%d", &units);
 
    if (units <= 100) {
        printf("Low Usage\n");
    }
    else if (units <= 300) {
        printf("Medium Usage\n");
    }
    else {
        printf("High Usage\n");
    }
 
    return 0;
}
// Task 3
#include <stdio.h>
 
int main() {
    int num;
 
    printf("Enter an integer: ");
    scanf("%d", &num);
 
    if (num > 0) {
        printf("Positive\n");
    }
    else if (num < 0) {
        printf("Negative\n");
    }
    else {
        printf("Zero\n");
    }
 
    return 0;
}
 // Task 4
#include <stdio.h>
#include <string.h>
 
int main() {
    char username[20];
    int password;
 
    printf("Enter username: ");
    scanf("%s", username);
 
    printf("Enter password: ");
    scanf("%d", &password);
 
    if (strcmp(username, "admin") == 0 && password == 1234) {
        printf("Login Successful\n");
    } else {
        printf("Invalid Credentials\n");
    }
 
    return 0;
}
 
//Task 5
#include <stdio.h>
 
int main() {
    int choice;
 
    printf("ATM Menu\n");
    printf("1. Balance Inquiry\n");
    printf("2. Cash Withdrawal\n");
    printf("3. Deposit\n");
    printf("4. Exit\n");
 
    printf("Enter your choice: ");
    scanf("%d", &choice);
 
    switch (choice) {
        case 1:
            printf("You selected Balance Inquiry\n");
            break;
        case 2:
            printf("You selected Cash Withdrawal\n");
            break;
        case 3:
            printf("You selected Deposit\n");
            break;
        case 4:
            printf("Exit\n");
            break;
        default:
            printf("Invalid Choice\n");
    }
 
    return 0;
}
// task 6
#include <stdio.h>
 
int main() {
    int m1, m2, m3, m4, m5;
    float total, percentage;
 
    printf("Enter marks of 5 subjects (0–100):\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
 
    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500) * 100;
 
    if (percentage >= 85) {
        printf("Grade A\n");
    }
    else if (percentage >= 70) {
        printf("Grade B\n");
    }
    else if (percentage >= 50) {
        printf("Grade C\n");
    }
    else {
        printf("Fail");
    }
 
    return 0;
}
// Task 7
#include <stdio.h>
 
int main() {
    float billAmount;
 
    printf("Enter total bill amount: ");
    scanf("%f", &billAmount);
 
    if (billAmount >= 5000) {
        printf("20%% discount\n");
    }
    else if (billAmount >= 3000) {
        printf("10%% discount\n");
    }
    else {
        printf("No discount\n");
    }
 
    return 0;
}
// task 8
#include <stdio.h>
#include <math.h>
 
int main() {
    int choice;
    double num1, num2, result;
 
    printf("Scientific Calculator Menu\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square of a number\n");
    printf("6. Cube of a number\n");
    printf("7. Square Root of a number\n");
    printf("8. Power (x^y)\n");
    printf("9. Absolute Value\n");
 
    printf("Enter your choice: ");
    scanf("%d", &choice);
 
    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result = %.2lf\n", result);
            break;
 
        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result = %.2lf\n", result);
            break;
 
        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result = %.2lf\n", result);
            break;
 
        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("Result = %.2lf\n", result);
            }
            break;
 
        case 5:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            result = num1 * num1;
            printf("Square = %.2lf\n", result);
            break;
 
        case 6:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            result = num1 * num1 * num1;
            printf("Cube = %.2lf\n", result);
            break;
 
        case 7:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if (num1 < 0) {
                printf("Error: Cannot compute square root of negative   number.\n");
            } else {
                result = sqrt(num1);
                printf("Square Root = %.2lf\n", result);
            }
            break;
 
        case 8:
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &num1, &num2);
            result = pow(num1, num2);
            printf("Result = %.2lf\n", result);
            break;
 
        case 9:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            result = fabs(num1);
            printf("Absolute Value = %.2lf\n", result);
            break;
 
        default:
            printf("Invalid Choice\n");
    }
 
    return 0;
}


