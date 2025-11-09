#include <stdio.h>

// Function prototypes
void input_array(int *arr, int n);
void display_array(int *arr, int n);
int sum_array(int *arr, int n);
int count_positive(int *arr, int n);
int count_negative(int *arr, int n);

int main() {
    int arr[100];
    int n, sum, pos_count, neg_count;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    input_array(arr, n);

    printf("\nThe array elements are: ");
    display_array(arr, n);

    sum = sum_array(arr, n);
    printf("\nThe sum of all elements = %d\n", sum);

    pos_count = count_positive(arr, n);
    neg_count = count_negative(arr, n);

    printf("The number of positive elements = %d\n", pos_count);
    printf("The number of negative elements = %d\n", neg_count);

    return 0;
}

// Function to input array elements
void input_array(int *arr, int n) {
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
}

// Function to display array elements
void display_array(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

// Function to calculate sum of array
int sum_array(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    return sum;
}

// Function to count positive numbers
int count_positive(int *arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) > 0)
            count++;
    }
    return count;
}

// Function to count negative numbers
int count_negative(int *arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) < 0)
            count++;
    }
    return count;
}
