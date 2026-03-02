#include <stdio.h>
#include <math.h>

int main() {

    // =========================
    // Task 1 - Scholarship Eligibility
    // =========================
    /*
    float cgpa, familyIncome;
    printf("Enter CGPA: ");
    scanf("%f", &cgpa);
    printf("Enter Family Income: ");
    scanf("%f", &familyIncome);

    if (cgpa >= 3.5) {
        if (familyIncome < 50000)
            printf("100%% Scholarship\n");
        else
            printf("50%% Scholarship\n");
    } else {
        if (cgpa >= 3.0 && familyIncome < 40000)
            printf("25%% Scholarship\n");
        else
            printf("No Scholarship\n");
    }
    */

    // =========================
    // Task 2 - Electricity Bill
    // =========================
    /*
    int units;
    char type;
    float bill;

    printf("Enter Units: ");
    scanf("%d", &units);
    printf("Enter Type (D/C): ");
    scanf(" %c", &type);

    if (units <= 100)
        bill = units * 10;
    else if (units <= 300)
        bill = (type=='D'||type=='d') ? units*12 : units*15;
    else
        bill = units * 20;

    printf("Total Bill: %.2f\n", bill);
    */

    // =========================
    // Task 3 - Parking Fee
    // =========================
    /*
    int vehicle, hours, fee;
    printf("Enter Vehicle (1-Car,2-Bike,3-Bus): ");
    scanf("%d",&vehicle);
    printf("Enter Hours: ");
    scanf("%d",&hours);

    if(vehicle==1) fee=50*hours;
    else if(vehicle==2) fee=20*hours;
    else if(vehicle==3) fee=200*hours;
    else { printf("Invalid\n"); return 0; }

    printf("Parking Fee: %d\n",fee);
    */

    // =========================
    // Task 4 - Restaurant Order
    // =========================
    /*
    int price, qty, total;
    printf("Enter Price: ");
    scanf("%d",&price);
    printf("Enter Quantity: ");
    scanf("%d",&qty);
    total = price * qty;
    printf("Total Bill: %d\n",total);
    */

    // =========================
    // Task 5 - Salary Bonus
    // =========================
    /*
    float salary, bonus;
    int service;
    printf("Enter Salary: ");
    scanf("%f",&salary);
    printf("Enter Years of Service: ");
    scanf("%d",&service);

    bonus = (service>10)?salary*0.30:
            (service>5)?salary*0.20:
                         salary*0.10;

    printf("Bonus: %.2f\n",bonus);
    */

    // =========================
    // Task 6 - Triangle Type
    // =========================
    /*
    float a,b,c;
    printf("Enter Three Sides: ");
    scanf("%f%f%f",&a,&b,&c);

    if(a+b<=c||a+c<=b||b+c<=a)
        printf("Not Valid Triangle\n");
    else if(a==b&&b==c)
        printf("Equilateral\n");
    else if(a==b||a==c||b==c)
        printf("Isosceles\n");
    else
        printf("Scalene\n");
    */

    // =========================
    // Task 7 - Login System
    // =========================
    /*
    int id, pass;
    printf("Enter ID: ");
    scanf("%d",&id);
    if(id==101){
        printf("Enter Password: ");
        scanf("%d",&pass);
        if(pass==5555)
            printf("Login Successful\n");
        else
            printf("Wrong Password\n");
    } else
        printf("Invalid ID\n");
    */

    // =========================
    // Task 8 - Calculator (Simple)
    // =========================
    /*
    int choice;
    double x,y;
    printf("1-Add 2-Subtract\n");
    scanf("%d",&choice);

    printf("Enter Two Numbers: ");
    scanf("%lf%lf",&x,&y);

    if(choice==1)
        printf("Result: %.2f\n",x+y);
    else if(choice==2)
        printf("Result: %.2f\n",x-y);
    else
        printf("Invalid Choice\n");
    */

    return 0;
}