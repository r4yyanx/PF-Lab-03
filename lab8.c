// Task 1
#include<stdio.h>
int main() {
    int marks [4] [3] = {
        {80, 75, 90},
        {60, 70, 85},
        {88, 92, 79},
        {55, 65, 70}
    }; [cite: 3, 4, 18]
    int totalMarks [4] ={0};
    float averageMarks [3] ={0}; [cite: 19]
    for(int i=0; i<4; i++) {
        for (int j=0; j<3; j++) {
            totalMarks[i] += marks[i][j];
        }
    } [cite: 20, 21, 22, 24]
    for(int j=0; j<3; j++) {
        for(int i=0; i<4; i++) {
            averageMarks[j] += marks[i][j];
        }
        averageMarks[j] /= 4;
    } [cite: 25, 26, 27, 29, 30]
    printf("Total marks of each student:\n");
    for(int i=0; i<4; i++) {
        printf("Student %d: %d\n", i+1, totalMarks[i]);
    } [cite: 31, 33]
    printf ("Average marks of each subject:\n");
    for(int j=0; j<3; j++) {
        printf("Subject %d: %.2f\n", j+1, averageMarks[j]);
    } [cite: 34, 35, 37]
    return 0;
} [cite: 38]

// Task 2
#include<stdio.h>
int main() {
    int cinema [5] [6] = {
        {0, 1, 0, 0, 1, 0},
        {1, 1, 0, 0, 0, 0},
        {0, 0, 1, 1, 0, 0},
        {1, 0, 0, 1, 1, 0},
        {0, 1, 0, 0, 1, 1}
    }; [cite: 54, 55, 74]
    int availableSeats = 0;
    int maxBookedSeats = -1;
    int rowWithMaxBookedSeats = -1; [cite: 75, 76, 77]
    for (int i=0; i<5; i++) {
        int bookedSeatsInRow = 0;
        for (int j=0; j<6; j++) {
            if (cinema[i][j] == 0) {
                availableSeats++;
            } else {
                bookedSeatsInRow++;
            }
        } [cite: 78, 79, 80, 81, 84, 85]
        if (bookedSeatsInRow > maxBookedSeats) {
            maxBookedSeats = bookedSeatsInRow;
            rowWithMaxBookedSeats = i;
        } [cite: 86, 87, 88]
    }
    printf("Total available seats: %d\n", availableSeats);
    printf ("Row with maximum booked seats: Row %d with %d booked seats\n", rowWithMaxBookedSeats + 1, maxBookedSeats); [cite: 91, 92, 93]
    return 0;
} [cite: 95]

// Task 3
#include<stdio.h>
int main() {
    float temperature [7] [3]; [cite: 104]
    for(int i=0; i<7; i++) {
        for(int j=0; j<3; j++) {
            temperature [i][j] = 20.0+(i*2)+(j*1.5);
        }
    } [cite: 105, 106, 107, 110]
    float highestTemp = temperature[0][0];
    for(int i=0; i<7; i++) {
        for (int j=0; j<3; j++) {
            if (temperature[i][j] > highestTemp) {
                highestTemp = temperature [i][j];
            }
        }
    } [cite: 111, 112, 113, 114, 115, 118]
    printf("Highest temperature recorded in the week: %.2f\n", highestTemp); [cite: 119, 120]
    for(int i=0; i<7; i++) {
        float dailyTotal = 0;
        for(int j=0; j<3; j++) {
            dailyTotal += temperature[i][j];
        }
        float dailyAverage = dailyTotal / 3;
        printf ("Average temperature for Day %d: %.2f\n", i+1, dailyAverage);
    } [cite: 121, 122, 123, 124, 126, 127, 129]
    return 0;
} [cite: 131]

// Task 4
#include <stdio.h>
int main() {
    int matrix [3] [3], transpose [3] [3], cofactor [3] [3], adjoint [3] [3];
    float determinant = 0, inverse [3] [3]; [cite: 144]
    printf("Enter a 3x3 matrix:\n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    } [cite: 146, 148, 149, 150, 153]
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            transpose[j] [i] = matrix[i][j];
        }
    } [cite: 165, 166, 167, 169]
    determinant = matrix [0] [0] * (matrix [1] [1] * matrix [2] [2] - matrix [1] [2] * matrix [2] [1]) -
                  matrix [0] [1] * (matrix [1] [0] * matrix [2] [2] - matrix [1] [2] * matrix [2] [0]) +
                  matrix [0] [2] * (matrix [1] [0] * matrix [2] [1] - matrix [1] [1] * matrix [2] [0]); [cite: 179, 180, 181, 182, 183, 184]
    cofactor [0] [0] = (matrix [1] [1] * matrix [2] [2] - matrix [1] [2] * matrix [2] [1]);
    cofactor [0][1] = -(matrix [1] [0] * matrix [2] [2] - matrix [1] [2] * matrix [2] [0]);
    cofactor [0] [2] = (matrix [1] [0] * matrix [2] [1] - matrix [1] [1] * matrix [2] [0]);
    cofactor [1] [0] = -(matrix [0] [1] * matrix [2] [2] - matrix [0] [2] * matrix [2] [1]);
    cofactor [1] [1] = (matrix [0] [0] * matrix [2] [2] - matrix [0] [2] * matrix [2] [0]);
    cofactor [1] [2] = -(matrix [0] [0] * matrix [2] [1] - matrix [0] [1] * matrix [2] [0]);
    cofactor [2] [0] = (matrix [0] [1] * matrix [1] [2] - matrix [0] [2] * matrix [1] [1]);
    cofactor [2] [1] = -(matrix [0] [0] * matrix [1] [2] - matrix [0] [2] * matrix [1] [0]);
    cofactor [2] [2] = (matrix [0] [0] * matrix [1] [1] - matrix [0] [1] * matrix [1] [0]); [cite: 187, 188, 189, 191, 193, 195, 199, 202, 205, 206]
    for(int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            adjoint[j] [i] = cofactor[i][j];
        }
    } [cite: 219, 220, 221, 223]
    if (determinant == 0) {
        printf("\nInverse does not exist because the determinant is 0.\n");
    } else {
        printf("\nInverse Matrix:\n");
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                inverse[i][j] = (float)adjoint[i][j] / determinant;
                printf("%.2f ", inverse[i][j]);
            }
            printf("\n");
        }
    } [cite: 233, 235, 237, 238, 240, 242, 245, 246]
    return 0;
} [cite: 247]

// Task 5
#include <stdio.h>
int main() {
    int r1, c1, r2, c2;
    int A [5] [5], B[5] [5]; [cite: 277, 278, 279]
    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &r1, &c1); [cite: 280, 281]
    for (int i=0; i<r1; i++) {
        for (int j=0; j<c1; j++) {
            scanf("%d", &A[i][j]);
        }
    } [cite: 283, 284, 285, 287]
    int isSquare = (r1 == c1);
    int isIdentity = isSquare, isSymmetric = isSquare; [cite: 298, 309, 313]
    for (int i=0; i<r1; i++) {
        for (int j=0; j<c1; j++) {
            if (isSquare) {
                if (i == j && A[i][j] != 1) isIdentity = 0;
                if (i != j && A[i][j] != 0) isIdentity = 0;
                if (A[i][j] != A[j][i]) isSymmetric = 0;
            }
        }
    } [cite: 318, 319, 326, 333, 338, 340, 342]
    printf("\n--- Matrix Classifications --\n");
    if (isSquare) printf("1. Square Matrix\n");
    if (isIdentity) printf("4. Identity Matrix\n");
    if (isSymmetric) printf("9. Symmetric Matrix\n"); [cite: 401, 403, 416, 432]
    return 0;
} [cite: 460]

// Task 6
#include <stdio.h>
int main() {
    int r1, c1, r2, c2;
    int mat1 [3] [3], mat2 [3] [3], result [3] [3]; [cite: 473, 477]
    printf ("Enter rows and columns for Matrix 1: ");
    scanf("%d %d", &r1, &c1);
    printf ("Enter rows and columns for Matrix 2: ");
    scanf("%d %d", &r2, &c2); [cite: 478, 479, 480]
    if (c1 != r2) {
        printf("\nError: Multiplication not possible!\n");
        return 0;
    } [cite: 481, 482]
    for (int i=0; i<r1; i++) {
        for (int j=0; j<c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    } [cite: 486, 487, 490, 491]
    for (int i=0; i<r2; i++) {
        for (int j=0; j<c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    } [cite: 493, 494, 495, 496]
    for (int i=0; i<r1; i++) {
        for (int j=0; j<c2; j++) {
            result[i][j] = 0;
            for (int k=0; k<c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    } [cite: 499, 500, 501, 502, 505]
    printf("\nResulting Matrix\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    } [cite: 516]
    return 0;
}
