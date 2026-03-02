// Task 1
#include <stdio.h>

int main()
{
    int i, checkin;
    int total = 0;

    for( i = 1; i <= 25; i++)
    {
        printf("Member %d (1 = Checked In, 0 = Absent): ", i);
        scanf("%d", &checkin);

        if(checkin == 1)
        {
            total = total + 1;
        }
    }

    printf("Total Checked In Members = %d", total);

    return 0;
}
// Task 2
#include <stdio.h>

int main()
{
    float balance, usage;

    printf("Enter available data balance (in MB): ");
    scanf("%f", &balance);

    while(balance > 0)
    {
        printf("Enter data used (in MB): ");
        scanf("%f", &usage);

        balance = balance - usage;

        printf("Remaining balance: %.2f MB\n", balance);
    }

    printf("Data balance finished!\n");

    return 0;
}
// Task 3
#include <stdio.h>

int main()
{
    int code;

    do
    {
        printf("Enter access code: ");
        scanf("%d", &code);

        if(code != 2468)
        {
            printf("Wrong code! Try again.\n");
        }

    } while(code != 2468);

    printf("Door Unlocked!\n");

    return 0;
}
// Task 4
#include <stdio.h>

int main()
{
    int i,N;
    int total = 0;

    printf("Enter number of days: ");
    scanf("%d", &N);

    for( i = 1; i <= N; i++)
    {
        total = total + i;   
    }

    printf("Total distance covered in %d days = %d km", N, total);

    return 0;
}
// Task 5
#include <stdio.h>

int main()
{
    int units;
    int count = 0;
    float total = 0, average;

    printf("Enter daily units consumed (-999 to stop): ");
    scanf("%d", &units);

    while(units != -999)
    {
        total = total + units;
        count++;

        printf("Enter daily units consumed (-999 to stop): ");
        scanf("%d", &units);
    }

    if(count > 0)
    {
        average = total / count;
        printf("Average consumption = %.2f units\n", average);
    }
    else
    {
        printf("No data entered.\n");
    }

    return 0;
}
// Task 6
#include <stdio.h>

int main()
{
	int year;
    float salary;

    printf("Enter base salary: ");
    scanf("%f", &salary);

    printf("\nSalary for next 10 years (5%% annual increment):\n");

    for( year = 1; year <= 10; year++)
    {
        salary = salary + (salary * 0.05);   
        printf("Year %d: %.2f\n", year, salary);
    }

    return 0;
}
// Task 7
#include <stdio.h>

int main()
{
    int choice;

    do
    {
        printf("\n1. Issue Book\n");
        printf("2. Return Book\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("Book Issued\n");
        }
        else if(choice == 2)
        {
            printf("Book Returned\n");
        }

    } while(choice != 3);

    printf("Program Ended\n");

    return 0;
}
// Task 8
#include <stdio.h>

int main()
{
    int pin;

    printf("Enter PIN: ");
    scanf("%d", &pin);

    while(pin != 5555)
    {
        printf("Incorrect PIN\n");
        printf("Enter PIN again: ");
        scanf("%d", &pin);
    }

    printf("Access Granted\n");

    return 0;
}
// Task 9
#include <stdio.h>

int main()
{
    int i, N;
    int total = 0;

    printf("Enter number of tickets: ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++)
    {
        total = total + (i * 100);   
    }

    printf("Total Revenue = $%d\n", total);

    return 0;
}
// Task 10
#include <stdio.h>

int main()
{
    int rating;
    int excellent = 0, satisfactory = 0, needsImprovement = 0;

    printf("Enter employee rating (0-100)  ");
    scanf("%d", &rating);

    while(rating != -1)
    {
        if(rating >= 85)
        {
            excellent++;
        }
        else if(rating >= 60)
        {
            satisfactory++;
        }
        else
        {
            needsImprovement++;
        }

        printf("Enter employee rating (0-100) ");
        scanf("%d", &rating);
    }

    printf("\nTotal Excellent: %d\n", excellent);
    printf("Total Satisfactory: %d\n", satisfactory);
    printf("Total Needs Improvement: %d\n", needsImprovement);

    return 0;
}
// Task 11
#include <stdio.h>

int main()
{
    float price, total = 0, discount = 0, finalAmount;
    int choice;

    do
    {
        printf("Enter item price: ");
        scanf("%f", &price);

        total = total + price;

        printf("Add another item? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);

    } while(choice == 1);

    if(total > 3000)
    {
        discount = total * 0.10;
    }

    finalAmount = total - discount;

    printf("\nTotal Bill: %.2f\n", total);
    printf("Discount: %.2f\n", discount);
    printf("Final Payable Amount: %.2f\n", finalAmount);

    return 0;
}
// Task 12
#include <stdio.h>

int main()
{
    int spaces = 50;
    int entry = 1;   

    printf("Parking Lot System (50 Spaces Available)\n");

    while(spaces > 0 && entry != 0)
    {
        printf("\nEnter 1 for new car, 0 to stop: ");
        scanf("%d", &entry);

        if(entry == 1)
        {
            spaces--;
            printf("Car Parked. Remaining spaces: %d\n", spaces);
        }
        else if(entry == 0)
        {
            printf("Parking stopped by operator.\n");
        }
        else
        {
            printf("Invalid input!\n");
        }
    }

    if(spaces == 0)
    {
        printf("\nParking Full! No more spaces available.\n");
    }

    return 0;
}

