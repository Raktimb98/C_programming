#include<stdio.h>

// Function prototype should match the definition
void array(int a[], int n);

int main(void){
    printf("Enter the number of elements: ");
    int n;
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Call the array function with the array and its size
    array(a, n);

    return 0;
}

// Function definition
void array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        // Printing the value of each element in the array
        printf("index: %d, value: %d\n", i, a[i]);
    }
}