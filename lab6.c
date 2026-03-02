// Task 1
#include <stdio.h>

int main()
{
    int checkin;
    int total = 0;

    for(int i = 1; i <= 25; i++)
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
