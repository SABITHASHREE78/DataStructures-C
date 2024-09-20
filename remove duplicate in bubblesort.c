#include <stdio.h>
#define MAX_SIZE 100
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
void printUnique(int arr[], int n) {
    if (n == 0) return; 
    printf("%d", arr[0]);
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            printf(" %d", arr[i]);
        }
    }
    printf("\n");
}
int main() {
    int arr[MAX_SIZE];
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    printUnique(arr, n);
return 0;
}
