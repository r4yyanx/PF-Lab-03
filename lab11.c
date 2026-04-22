// Task 1
#include<stdio.h>
int totalPower(int n)
{
    if(n==1)
        return 100;
    return totalPower(n-1)+(100*(1<<(n-1)));
}
int main()
{
    int n;
    printf("Enter number of floors: ");
    scanf("%d",&n);
    printf("Total power consumption: %d kWh\n",totalPower(n));
    return 0;
}


// Task 2
#include<stdio.h>
int countUpper(char *str)
{
    if(*str=='\0')
        return 0;
    if(*str>='A' && *str<='Z')
        return 1+countUpper(str+1);
    return countUpper(str+1);
}
int countDigit(char *str)
{
    if(*str=='\0')
        return 0;
    if(*str>='0' && *str<='9')
        return 1+countDigit(str+1);
    return countDigit(str+1);
}
int main()
{
    char str[100];
    printf("Enter password: ");
    scanf("%s",str);
    printf("Uppercase letters: %d\n",countUpper(str));
    printf("Digits: %d\n",countDigit(str));
    return 0;
}


// Task 3
#include<stdio.h>
int countWays(int n)
{
    if(n==0||n==1)
        return 1;
    return countWays(n-1)+countWays(n-2);
}
void printPaths(int n,char path[],int idx)
{
    if(n==0)
    {
        path[idx-1]='\0';
        printf("%s\n",path);
        return;
    }
    if(n>=1)
    {
        path[idx]='1';
        path[idx+1]='+';
        printPaths(n-1,path,idx+2);
    }
    if(n>=2)
    {
        path[idx]='2';
        path[idx+1]='+';
        printPaths(n-2,path,idx+2);
    }
}
int main()
{
    int n;
    char path[50];
    printf("Enter value of N: ");
    scanf("%d",&n);
    printf("Total ways: %d\n",countWays(n));
    printf("Paths:\n");
    printPaths(n,path,0);
    return 0;
}


// Task 4
#include<stdio.h>
#include<string.h>
struct Patient
{
    char name[50];
    int age;
    char bloodType[5];
    int patientID;
    char diagnosis[100];
};
void displayAll(struct Patient p[],int n)
{
    int i;
    printf("\nAll Patients:\n");
    for(i=0;i<n;i++)
        printf("%s %d %s %d %s\n",p[i].name,p[i].age,p[i].bloodType,p[i].patientID,p[i].diagnosis);
}
void searchByID(struct Patient p[],int n,int id)
{
    int i,found=0;
    for(i=0;i<n;i++)
    {
        if(p[i].patientID==id)
        {
            printf("Patient Found:\n");
            printf("%s %d %s %d %s\n",p[i].name,p[i].age,p[i].bloodType,p[i].patientID,p[i].diagnosis);
            found=1;
        }
    }
    if(!found)
        printf("Patient not found\n");
}
int main()
{
    struct Patient p[5];
    int i,id;
    for(i=0;i<5;i++)
    {
        printf("Enter name: ");
        scanf("%s",p[i].name);
        printf("Enter age: ");
        scanf("%d",&p[i].age);
        printf("Enter blood type: ");
        scanf("%s",p[i].bloodType);
        printf("Enter patient ID: ");
        scanf("%d",&p[i].patientID);
        printf("Enter diagnosis: ");
        scanf("%s",p[i].diagnosis);
    }
    displayAll(p,5);
    printf("Enter ID to search: ");
    scanf("%d",&id);
    searchByID(p,5,id);
    return 0;
}


// Task 5
#include<stdio.h>
#include<string.h>
struct Department
{
    char deptCode[10];
    char deptName[50];
};
struct Course
{
    char courseCode[10];
    char courseName[60];
    int creditHours;
    struct Department dept;
};
void filter(struct Course c[],int n,char code[])
{
    int i;
    printf("Courses in department %s:\n",code);
    for(i=0;i<n;i++)
    {
        if(strcmp(c[i].dept.deptCode,code)==0)
            printf("%s %s %d %s %s\n",c[i].courseCode,c[i].courseName,c[i].creditHours,c[i].dept.deptCode,c[i].dept.deptName);
    }
}
int main()
{
    struct Course c[3];
    int i;
    char code[10];
    for(i=0;i<3;i++)
    {
        printf("Enter course code: ");
        scanf("%s",c[i].courseCode);
        printf("Enter course name: ");
        scanf("%s",c[i].courseName);
        printf("Enter credit hours: ");
        scanf("%d",&c[i].creditHours);
        printf("Enter department code: ");
        scanf("%s",c[i].dept.deptCode);
        printf("Enter department name: ");
        scanf("%s",c[i].dept.deptName);
    }
    printf("\nAll Courses:\n");
    for(i=0;i<3;i++)
        printf("%s %s %d %s %s\n",c[i].courseCode,c[i].courseName,c[i].creditHours,c[i].dept.deptCode,c[i].dept.deptName);
    printf("Enter department code to filter: ");
    scanf("%s",code);
    filter(c,3,code);
    return 0;
}


// Task 6
#include<stdio.h>
#include<string.h>
struct Order
{
    int orderID;
    char customerName[50];
    char productName[50];
    int quantity;
    float unitPrice;
    char status[20];
};
float computeTotal(struct Order o)
{
    return o.quantity*o.unitPrice;
}
void filterByStatus(struct Order o[],int n,char *status)
{
    int i;
    printf("Orders with status %s:\n",status);
    for(i=0;i<n;i++)
    {
        if(strcmp(o[i].status,status)==0)
            printf("%d %s %s %d %.2f %s\n",o[i].orderID,o[i].customerName,o[i].productName,o[i].quantity,o[i].unitPrice,o[i].status);
    }
}
int main()
{
    struct Order o[4];
    int i;
    char status[20];
    for(i=0;i<4;i++)
    {
        printf("Enter order ID: ");
        scanf("%d",&o[i].orderID);
        printf("Enter customer name: ");
        scanf("%s",o[i].customerName);
        printf("Enter product name: ");
        scanf("%s",o[i].productName);
        printf("Enter quantity: ");
        scanf("%d",&o[i].quantity);
        printf("Enter unit price: ");
        scanf("%f",&o[i].unitPrice);
        printf("Enter status: ");
        scanf("%s",o[i].status);
    }
    printf("\nBills:\n");
    for(i=0;i<4;i++)
        printf("Order %d Total: %.2f\n",o[i].orderID,computeTotal(o[i]));
    printf("Enter status to filter: ");
    scanf("%s",status);
    filterByStatus(o,4,status);
    return 0;
}
