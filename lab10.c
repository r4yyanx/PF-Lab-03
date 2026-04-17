// Task 1
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[50];
    int i, valid = 1;

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0'; 
    int len = strlen(name);

    if (len < 3 || len > 20)
        valid = 0;

    if (name[0] == ' ' || name[len - 1] == ' ')
        valid = 0;

    for (i = 0; i < len; i++) {
        if (isdigit(name[i])) {
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("Valid Name\n");
    else
        printf("Invalid Name\n");

    printf("Length: %d\n", len);
    return 0;
}


// Task 2
#include <stdio.h>
#include <string.h>

int main() {
    char password[] = "admin123";
    char input[50];
    int attempts = 0;

    while (attempts < 3) {
        printf("Enter password: ");
        scanf("%s", input);

        if (strlen(input) == 0) {
            printf("Empty password!\n");
            continue;
        }

        if (strcmp(password, input) == 0) {
            printf("Access Granted\n");
            return 0;
        } else {
            printf("Wrong Password\n");

            if (strcmp(input, password) < 0)
                printf("Input is alphabetically BEFORE stored password\n");
            else
                printf("Input is AFTER stored password\n");

            if (attempts == 1) {
                if (strncmp(password, input, 3) == 0)
                    printf("First 3 characters match!\n");
                else
                    printf("First 3 characters do not match\n");
            }
        }
        attempts++;
    }

    printf("Account Locked!\n");
    return 0;
}


// Task 3
#include <stdio.h>
#include <string.h>

int main() {
    char email[50], copy[50], formatted[70];
    char *ptr;

    printf("Enter email: ");
    scanf("%s", email);

    strcpy(copy, email);
    ptr = strchr(copy, '@');

    if (ptr == NULL) {
        printf("Invalid Email\n");
        return 0;
    }

    printf("Domain: %s\n", ptr + 1);

    if (strstr(ptr, ".") == NULL) {
        printf("Invalid domain (no '.')\n");
    }

    strcpy(formatted, "Email: ");
    strcat(formatted, copy);

    printf("%s\n", formatted);

    return 0;
}


// Task 4
#include <stdio.h>
#include <string.h>

int main() {
    char names[5][30], search[30];
    int i, found = 0;

    for (i = 0; i < 5; i++) {
        printf("Enter name %d: ", i + 1);
        fgets(names[i], 30, stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
    }

    printf("\nAll Students:\n");
    for (i = 0; i < 5; i++)
        printf("%s\n", names[i]);

    printf("Search name: ");
    fgets(search, 30, stdin);
    search[strcspn(search, "\n")] = '\0';

    for (i = 0; i < 5; i++) {
        if (strcmp(names[i], search) == 0) {
            printf("Found at position %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student not found\n");

    return 0;
}


// Task 5
#include <stdio.h>
#include <string.h>

int main() {
    char words[6][20];
    int seen[6] = {0};
    int i, j, count, k;

    for (i = 0; i < 6; i++) {
        printf("Enter word: ");
        scanf("%s", words[i]);
    }

    for (i = 0; i < 6; i++) {
        if (seen[i]) continue;

        count = 1;

        for (j = i + 1; j < 6; j++) {
            if (strcmp(words[i], words[j]) == 0) {
                count++;
                seen[j] = 1;
            }
        }

        printf("\nWord: %s | Count: %d\nCharacters: ", words[i], count);

        for (k = 0; words[i][k] != '\0'; k++)
            printf("%c ", words[i][k]);

        printf("\n");
    }

    return 0;
}


// Task 6
#include <stdio.h>

int main() {
    FILE *fptr;
    char name[30];
    int grade, i;

    fptr = fopen("grades.txt", "w");

    if (fptr == NULL) {
        printf("File error\n");
        return 0;
    }

    for (i = 0; i < 3; i++) {
        printf("Enter name and grade: ");
        scanf("%s %d", name, &grade);
        fprintf(fptr, "%s %d\n", name, grade);
    }

    fclose(fptr);

    fptr = fopen("grades.txt", "r");

    while (fscanf(fptr, "%s %d", name, &grade) != EOF)
        printf("%s %d\n", name, grade);

    fclose(fptr);

    return 0;
}


// Task 7
#include <stdio.h>

int main() {
    FILE *fptr;
    char product[30];
    int qty;

    fptr = fopen("inventory.txt", "a");

    if (fptr == NULL) {
        printf("File error\n");
        return 0;
    }

    printf("Enter product and quantity: ");
    scanf("%s %d", product, &qty);

    fprintf(fptr, "%s %d\n", product, qty);
    fclose(fptr);

    fptr = fopen("inventory.txt", "r");

    while (fscanf(fptr, "%s %d", product, &qty) != EOF)
        printf("%s %d\n", product, qty);

    fclose(fptr);

    return 0;
}


// Task 8
#include <stdio.h>

int main() {
    FILE *fptr;
    int score, i, sum = 0, val;

    fptr = fopen("survey.txt", "w");

    for (i = 0; i < 5; i++) {
        printf("Enter score: ");
        scanf("%d", &score);
        fprintf(fptr, "%d\n", score);
    }

    fclose(fptr);

    fptr = fopen("survey.txt", "r");

    while (fscanf(fptr, "%d", &val) != EOF)
        sum += val;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", sum / 5.0);

    fclose(fptr);

    return 0;
}


// Task 9
#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("config.txt", "r");

    if (fptr == NULL) {
        printf("File not found. Creating default config...\n");

        fptr = fopen("config.txt", "w");
        fprintf(fptr, "max_users=50\n");
        fprintf(fptr, "timeout=30\n");
        fprintf(fptr, "mode=auto\n");

        fclose(fptr);
    } else {
        printf("Config file exists\n");
        fclose(fptr);
    }

    return 0;
}


// Task 10
#include <stdio.h>

int main() {
    FILE *fptr;
    char name[30];
    int m1, m2, m3;
    float avg;

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter 3 marks: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    avg = (m1 + m2 + m3) / 3.0;

    fptr = fopen("report.txt", "w+");

    fprintf(fptr, "Name: %s\n", name);
    fprintf(fptr, "Marks: %d %d %d\n", m1, m2, m3);
    fprintf(fptr, "Average: %.2f\n", avg);

    if (avg >= 50)
        fprintf(fptr, "Status: Pass\n");
    else
        fprintf(fptr, "Status: Fail\n");

    rewind(fptr);

    char ch;
    while ((ch = fgetc(fptr)) != EOF)
        printf("%c", ch);

    fclose(fptr);

    return 0;
}
