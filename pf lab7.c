// Task 1
#include <stdio.h>
int main() {
    int arr[5];
    int i, temp;
    printf("Enter 5 integers: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    temp = arr[4];
    for(i = 4; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
    printf("Output ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

// Task 2
#include <stdio.h>
int main() {
    int arr[10];
    int i, search, count = 0;
    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number to search: ");
    scanf("%d", &search);
    for(i = 0; i < 10; i++) {
        if(arr[i] == search) {
            count++;
        }
    }
    if(count == 0) {
        printf("number not found");
    } else {
        printf("Number occurred %d times", count);
    }
    return 0;
}

// Task 3
#include <stdio.h>
int main() {
    int pass[10], fail[10];
    int i, mark;
    int p = 0, f = 0;
    float avgPass = 0, avgFail = 0;
    printf("Enter quiz marks (-1 to stop):\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &mark);
        if(mark == -1)
            break;
        if(mark >= 5 && mark <= 10) {
            pass[p] = mark;
            avgPass += mark;
            p++;
        }
        else if(mark >= 0 && mark < 5) {
            fail[f] = mark;
            avgFail += mark;
            f++;
        }
    }
    printf("\nPass Students Marks:\n");
    for(i = 0; i < p; i++) {
        printf("%d ", pass[i]);
    }
    if(p > 0)
        printf("\nAverage = %.2f", avgPass / p);
    else
        printf("\nNo pass students");
    printf("\n\nFail Students Marks:\n");
    for(i = 0; i < f; i++) {
        printf("%d ", fail[i]);
    }
    if(f > 0)
        printf("\nAverage = %.2f", avgFail / f);
    else
        printf("\nNo fail students");
    return 0;
}

// Task 4
#include <stdio.h>
int main() {
    char str[100];
    int i = 0;
    printf("Enter a sentence: ");
    scanf("%[^\n]", str);
    while(str[i] != '\0') {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }
    printf("Converted message: %s", str);
    return 0;
}

// Task 5
#include <stdio.h>
int main() {
    int arr[10];
    int i, max, min, diff;
    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(i = 1; i < 10; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    diff = max - min;
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
    printf("Difference (max - min) = %d", diff);
    return 0;
}

// Task 6
#include <stdio.h>
int main() {
    char str[100];
    int i = 0, vowels = 0, consonants = 0;
    printf("Enter a word: ");
    scanf("%s", str);
    while(str[i] != '\0') {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U') {
            vowels++;
        }
        else if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            consonants++;
        }
        i++;
    }
    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    return 0;
}

// Task 7
#include <stdio.h>
int main() {
    int arr[10];
    int i, j;
    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 10; i++) {
        if(arr[i] == -1)
            continue;
        for(j = i + 1; j < 10; j++) {
            if(arr[i] == arr[j]) {
                arr[j] = -1;
            }
        }
    }
    printf("Updated array:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

// Task 8
#include <stdio.h>
int main() {
    char str[100];
    printf("Enter characters: ");
    scanf("%[^A-Za-z]", str);
    printf("Non-alphabetic characters: %s\n", str);
    return 0;
}