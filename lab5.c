// Task 1
#include <stdio.h>
int main() {
     float cgpa;
    float familyIncome;
     printf("Enter CGPA: ");
    scanf("%f", &cgpa);
    printf("Enter Family Income: ");
    scanf("%f", &familyIncome);
    if (cgpa >= 3.5) {
        if (familyIncome < 50000) {
            printf("You are eligible for a 100%% Scholarship.\n");
        } else {
            printf("You are eligible for a 50%% Scholarship.\n");
        }
    } else {
        if (cgpa >= 3.0 && familyIncome < 40000) {
            printf("You are eligible for a 25%% Scholarship.\n");
        } else {
            printf("You are not eligible for any scholarship.\n");
        }
    }
    return 0;
}
// Task 2
#include <stdio.h>

int main() {
    int units;
    char customerType;
    float totalBill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    printf("Enter the customer type (D for Domestic, C for Commercial): ");
    scanf(" %c", &customerType);

    if (units <= 100) {
        totalBill = units * 10;
    } else if (units > 100 && units <= 300) {
        if (customerType == 'D' || customerType == 'd') {
            totalBill = units * 12;
        } else if (customerType == 'C' || customerType == 'c') {
            totalBill = units * 15;
        } else {
            printf("Invalid customer type entered.\n");
            return 1;
        }
    } else if (units > 300) {
        totalBill = units * 20;
    } else {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Total electricity bill: Rs. %.2f\n", totalBill);

    return 0;
}
// Task 3
#include <stdio.h>
int main() {
    int vehicleType, parkingType, hours, fee;
    printf("Enter Vehicle Type (1-Car, 2-Bike, 3-Bus): ");
    scanf("%d", &vehicleType);
    switch(vehicleType) {
        case 1:
            printf("Enter Parking Type (1-Regular, 2-VIP): ");
            scanf("%d", &parkingType);
            printf("Enter Hours Parked: ");
            scanf("%d", &hours);
            switch(parkingType) {
                case 1: fee = 50 * hours; break;
                case 2: fee = 100 * hours; break;
                default: printf("Invalid Parking Type\n"); return 0;
            }
            break;
        case 2:
            printf("Enter Parking Type (1-Regular, 2-Premium): ");
            scanf("%d", &parkingType);
            printf("Enter Hours Parked: ");
            scanf("%d", &hours);
            switch(parkingType) {
                case 1: fee = 20 * hours; break;
                case 2: fee = 40 * hours; break;
                default: printf("Invalid Parking Type\n"); return 0;
            }
            break;
        case 3:
            printf("Enter Hours Parked: ");
            scanf("%d", &hours);
            fee = 200 * hours;
            break;
        default:
            printf("Invalid Vehicle Type\n");
            return 0;
    }
    printf("Total Parking Fee: Rs. %d\n", fee);
    return 0;
}
// Task 4
#include <stdio.h>
int main(){
int category,item,quantity,price,total;
printf("Enter Category (1-Fast Food,2-Desi Food): ");
scanf("%d",&category);
switch(category){
case 1:
printf("Select Item (1-Burger,2-Pizza): ");
scanf("%d",&item);
switch(item){
case 1:price=500;printf("Selected: Burger\n");break;
case 2:price=1200;printf("Selected: Pizza\n");break;
default:printf("Invalid Item\n");return 0;
}
break;
case 2:
printf("Select Item (1-Biryani,2-Karahi): ");
scanf("%d",&item);
switch(item){
case 1:price=350;printf("Selected: Biryani\n");break;
case 2:price=1500;printf("Selected: Karahi\n");break;
default:printf("Invalid Item\n");return 0;
}
break;
default:printf("Invalid Category\n");return 0;
}
printf("Enter Quantity: ");
scanf("%d",&quantity);
total=price*quantity;
printf("Total Bill: Rs. %d\n",total);
return 0;
}
// Task 5
#include <stdio.h>
int main(){
float salary,bonus;
int service;
printf("Enter Salary: ");
scanf("%f",&salary);
printf("Enter Years of Service: ");
scanf("%d",&service);
bonus=(service>10)?salary*0.30:(service>5)?salary*0.20:salary*0.10;
printf("Bonus Amount: %.2f\n",bonus);
return 0;
}
Q5:
#include <stdio.h>
int main(){
float salary,bonus;
int service;
printf("Enter Salary: ");
scanf("%f",&salary);
printf("Enter Years of Service: ");
scanf("%d",&service);
bonus=(service>10)?salary*0.30:(service>5)?salary*0.20:salary*0.10;
printf("Bonus Amount: %.2f\n",bonus);
return 0;
}
// Task 6
#include <stdio.h>
int main(){
float a,b,c;
printf("Enter three sides: ");
scanf("%f%f%f",&a,&b,&c);
if(a+b<=c||a+c<=b||b+c<=a){
printf("Not a valid triangle\n");
}else{
if(a==b&&b==c){
printf("Equilateral Triangle\n");
}else{
if(a==b||a==c||b==c){
printf("Isosceles Triangle\n");
}else{
printf("Scalene Triangle\n");
}
}
}
return 0;
}
// Task 7
#include <stdio.h>

int main() {
    int correctID = 101;
    int correctPass = 5555;
    int correctOTP = 77;

    int inputID, inputPass, inputOTP;

    printf("Enter ID: ");
    scanf("%d", &inputID);

    if (inputID == correctID) {
        printf("Enter Password: ");
        scanf("%d", &inputPass);

        if (inputPass == correctPass) {
            printf("Enter OTP: ");
            scanf("%d", &inputOTP);

            if (inputOTP == correctOTP) {
                printf("Login Successful!\n");
            } else {
                printf("Invalid OTP.\n");
            }
        } else {
            printf("Incorrect Password.\n");
        }
    } else {
        printf("Invalid ID.\n");
    }

    return 0;
}
// Task 8
#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double x, y, result;

    printf("Advanced Scientific Calculator \n");
    printf("1. Addition       2. Subtraction    3. Multiplication\n");
    printf("4. Division       5. Square Root    6. Power (x^y)\n");
    printf("7. Logarithm      8. Absolute Value 9. Sine\n");
    printf("10. Cosine        11. Tangent\n");
    printf("--------------------------------------\n");
    printf("Enter your choice (1-11): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &x, &y);
            printf("Result: %.2f\n", x + y);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &x, &y);
            printf("Result: %.2f\n", x - y);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &x, &y);
            printf("Result: %.2f\n", x * y);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &x, &y);
            if (y != 0) {
                printf("Result: %.2f\n", x / y);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        case 5:
            printf("Enter number: ");
            scanf("%lf", &x);
            if (x >= 0) {
                printf("Result: %.2f\n", sqrt(x));
            } else {
                printf("Error: Square root of a negative number is not allowed.\n");
            }
            break;

        case 6:
            printf("Enter base (x) and power (y): ");
            scanf("%lf %lf", &x, &y);
            printf("Result: %.2f\n", pow(x, y));
            break;

        case 7:
            printf("Enter number: ");
            scanf("%lf", &x);
            if (x > 0) {
                printf("Result: %.2f\n", log10(x));
            } else {
                printf("Error: Logarithm of zero or negative is not allowed.\n");
            }
            break;

        case 8:
            printf("Enter number: ");
            scanf("%lf", &x);
            printf("Result: %.2f\n", fabs(x));
            break;

        case 9:
            printf("Enter angle in radians: ");
            scanf("%lf", &x);
            printf("Result: %.2f\n", sin(x));
            break;

        case 10:
            printf("Enter angle in radians: ");
            scanf("%lf", &x);
            printf("Result: %.2f\n", cos(x));
            break;

        case 11:
            printf("Enter angle in radians: ");
            scanf("%lf", &x);
            printf("Result: %.2f\n", tan(x));
            break;

        default:
            printf("Invalid selection! Please choose a number between 1 and 11.\n");
    }

    return 0;
}



