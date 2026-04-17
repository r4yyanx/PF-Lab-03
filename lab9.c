// Task 1
#include <stdio.h>

float triageScore(int severity, int age, int vitals);

int main() {
    int severity, age, vitals;

    printf("Enter severity (1-10), age risk (1-10), and vitals stability (1-10): ");
    scanf("%d %d %d", &severity, &age, &vitals);

    float score = triageScore(severity, age, vitals);

    printf("Triage Score: %.2f\n", score);

    if (score > 7.0)
        printf("Immediate attention required\n");
    else if (score >= 4.0 && score <= 7.0)
        printf("Moderate priority\n");
    else
        printf("Can wait\n");

    return 0;
}

float triageScore(int severity, int age, int vitals) {
    return (severity * 0.5) + (age * 0.3) + (vitals * 0.2);
}


// Task 2
#include <stdio.h>

float applyDiscount(float price, int tier);
void printInvoice(float original, float discounted);

int main() {
    float originalPrice;
    int tier;

    printf("Enter original price: ");
    scanf("%f", &originalPrice);

    printf("Enter membership tier (1=Bronze, 2=Silver, 3=Gold, 4=Platinum): ");
    scanf("%d", &tier);

    float discountedPrice = applyDiscount(originalPrice, tier);
    printInvoice(originalPrice, discountedPrice);

    return 0;
}

float applyDiscount(float price, int tier) {
    float discountRate = 0.0;

    if (tier == 1) discountRate = 0.05;
    else if (tier == 2) discountRate = 0.10;
    else if (tier == 3) discountRate = 0.20;
    else if (tier == 4) discountRate = 0.30;

    return price - (price * discountRate);
}

void printInvoice(float original, float discounted) {
    float discountAmount = original - discounted;
    float deliveryCharge = (discounted < 2000.0) ? 150.0 : 0.0;
    float finalTotal = discounted + deliveryCharge;

    printf("\n--- Invoice ---\n");
    printf("Original Price: Rs. %.2f\n", original);
    printf("Discount Amount: Rs. %.2f\n", discountAmount);

    if (deliveryCharge > 0)
        printf("Delivery Charge: Rs. %.2f\n", deliveryCharge);

    printf("Final Total: Rs. %.2f\n", finalTotal);
}


// Task 3
#include <stdio.h>

int totalRuns(int arr[], int n);
int highestScore(int arr[], int n);
int aboveAverage(int arr[], int n, float avg);

int main() {
    int scores[10];
    int i, n = 10;

    printf("Enter runs scored in 10 matches:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &scores[i]);

    int total = totalRuns(scores, n);
    float average = (float)total / n;
    int highest = highestScore(scores, n);
    int aboveAvgCount = aboveAverage(scores, n, average);

    printf("\nTotal Runs: %d\n", total);
    printf("Average Runs: %.2f\n", average);
    printf("Highest Score: %d\n", highest);
    printf("Matches Above Average: %d\n", aboveAvgCount);

    return 0;
}

int totalRuns(int arr[], int n) {
    int sum = 0, i;
    for (i = 0; i < n; i++) sum += arr[i];
    return sum;
}

int highestScore(int arr[], int n) {
    int max = arr[0], i;
    for (i = 1; i < n; i++)
        if (arr[i] > max) max = arr[i];
    return max;
}

int aboveAverage(int arr[], int n, float avg) {
    int count = 0, i;
    for (i = 0; i < n; i++)
        if (arr[i] > avg) count++;
    return count;
}


// Task 4
#include <stdio.h>

int validatePIN(int storedPIN, int enteredPIN);

int main() {
    int storedPIN = 4729, enteredPIN;
    int attempts = 3, i, success = 0;

    for (i = 0; i < 3; i++) {
        printf("Enter PIN: ");
        scanf("%d", &enteredPIN);

        if (validatePIN(storedPIN, enteredPIN)) {
            printf("Access granted\n");
            success = 1;
            break;
        } else {
            attempts--;
            if (attempts > 0)
                printf("Wrong PIN. %d attempts left\n", attempts);
        }
    }

    if (!success)
        printf("Card blocked\n");

    return 0;
}

int validatePIN(int storedPIN, int enteredPIN) {
    return storedPIN == enteredPIN;
}


// Task 5
#include <stdio.h>

float toMegajoules(float kwh);
float toBTU(float kwh);
float toCalories(float kwh);

int main() {
    float kwh;

    printf("Enter kWh: ");
    scanf("%f", &kwh);

    printf("MJ: %.2f\n", toMegajoules(kwh));
    printf("BTU: %.2f\n", toBTU(kwh));
    printf("Calories: %.2f\n", toCalories(kwh));

    return 0;
}

float toMegajoules(float kwh) { return kwh * 3.6; }
float toBTU(float kwh) { return kwh * 3412.14; }
float toCalories(float kwh) { return kwh * 859845.0; }


// Task 6
#include <stdio.h>

float totalRevenue(float bills[], int n);
int bestTable(float bills[], int n);
int isProfitable(float total);

int main() {
    float bills[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Table %d: ", i + 1);
        scanf("%f", &bills[i]);
    }

    float total = totalRevenue(bills, 5);
    int best = bestTable(bills, 5);

    printf("Total: %.2f\n", total);
    printf("Best Table: %d\n", best + 1);

    if (isProfitable(total))
        printf("Profitable\n");
    else
        printf("Not Profitable\n");

    return 0;
}

float totalRevenue(float bills[], int n) {
    float sum = 0;
    int i;
    for (i = 0; i < n; i++) sum += bills[i];
    return sum;
}

int bestTable(float bills[], int n) {
    int i, maxIdx = 0;
    for (i = 1; i < n; i++)
        if (bills[i] > bills[maxIdx]) maxIdx = i;
    return maxIdx;
}

int isProfitable(float total) {
    return total > 10000.0;
}


// Task 7
#include <stdio.h>

int main() {
    int arr[6] = {45, 50, 30, 60, 55, 40};
    int *p = arr;
    int i, highest = 0;

    for (i = 0; i < 6; i++) {
        if (*(p + i) > highest)
            highest = *(p + i);
    }

    for (i = 0; i < 6; i++)
        *(p + i) = (int)(((float)*(p + i) / highest) * 100);

    for (i = 0; i < 6; i++)
        printf("%d ", *(p + i));

    return 0;
}


// Task 8
#include <stdio.h>

int main() {
    int vibrations = 847;
    float temperature = 73.6;
    char status = 'W';

    void *sensor;

    sensor = &vibrations;
    printf("%d\n", *(int *)sensor);

    sensor = &temperature;
    printf("%.1f\n", *(float *)sensor);

    sensor = &status;
    printf("%c\n", *(char *)sensor);

    return 0;
}


// Task 9
#include <stdio.h>

int main() {
    int attendance[4][5] = {
        {1,1,1,1,0},
        {1,0,0,1,0},
        {1,1,1,1,1},
        {0,0,1,0,0}
    };

    int (*p)[5] = attendance;
    int i,j;

    for (i = 0; i < 4; i++) {
        int total = 0;
        for (j = 0; j < 5; j++) {
            total += (*(p+i))[j];
        }
        printf("Student %d: %d\n", i+1, total);
    }

    return 0;
}


// Task 10
#include <stdio.h>

int basicAttack(int dmg, int hp) { return hp - dmg; }
int powerStrike(int dmg, int hp) { return hp - (int)(dmg * 2.5); }
int heal(int dmg, int hp) { return hp + 20; }
int poisonAttack(int dmg, int hp) { return hp - (dmg / 2); }

int main() {
    int hp = 100, dmg = 25, choice, i;
    int (*action)(int, int);

    for (i = 1; i <= 3; i++) {
        printf("1.Basic 2.Power 3.Heal 4.Poison: ");
        scanf("%d", &choice);

        if (choice == 1) action = basicAttack;
        else if (choice == 2) action = powerStrike;
        else if (choice == 3) action = heal;
        else action = poisonAttack;

        hp = action(dmg, hp);
        printf("HP: %d\n", hp);

        if (hp <= 0) break;
    }

    return 0;
}
