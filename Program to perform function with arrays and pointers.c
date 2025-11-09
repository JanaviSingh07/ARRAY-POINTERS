// C program to perform functions with arrays and pointers.

#include <stdio.h>

/* function declarations */
void inputArray(int *arr, int n);
void displayArray(const int *arr, int n);
int sumArray(const int *arr, int n);
int countPositive(const int *arr, int n);
int countNegative(const int *arr, int n);

int main(void) {
    int arr[100];
    int n, Sum, PosCount, NegCount;

    printf("Enter the number of elements in array (max 100): ");

    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        puts("Invalid Size");
        return 1;
    }

    inputArray(arr, n);

    printf("\nArray elements are: ");
    displayArray(arr, n);

    // Calculate sum and counts
    Sum = sumArray(arr, n);
    PosCount = countPositive(arr, n);
    NegCount = countNegative(arr, n);

    // Display results
    printf("\nSum of all elements = %d\n", Sum);
    printf("Number of positive elements = %d\n", PosCount);
    printf("Number of negative elements = %d\n", NegCount);

    return 0;
}

/* Read n integers into array via pointer arithmetic */
void inputArray(int *arr, int n) {
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
}

/* Print array elements */
void displayArray(const int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

// Function to calculate sum of array elements
int sumArray(const int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    return sum;
}

/* Count Positives (>0) */
int countPositive(const int *arr, int n) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) > 0) {
            cnt++;
        }
    }
    return cnt;
}

/* Count Negatives (<0) */
int countNegative(const int *arr, int n) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) < 0) {
            cnt++;
        }
    }
    return cnt;
}
