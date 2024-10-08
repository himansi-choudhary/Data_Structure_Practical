// Write a C program to sort a random array of n integers (value of n is accepted from user) by using Insertion Sort algorithm in ascending order

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    
    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
    
    printf("Original Array: ");
    printArray(arr, n); 

    insertionSort(arr, n);
    printf("Sorted array: ");
    printArray(arr, n);
    return 0;
}