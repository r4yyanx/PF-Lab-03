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
