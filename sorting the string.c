#include <stdio.h>
#include <string.h>
#define MAX_NAME_LENGTH 100
#define NUMBER_OF_NAMES 3
void swap(char names[][MAX_NAME_LENGTH], int i, int j) {
    char temp[MAX_NAME_LENGTH];
    strcpy(temp, names[i]);
    strcpy(names[i], names[j]);
    strcpy(names[j], temp);
}
void bubbleSort(char names[][MAX_NAME_LENGTH], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                swap(names, j, j + 1);
            }
        }
    }
}

int main() {
    char names[NUMBER_OF_NAMES][MAX_NAME_LENGTH];
    printf("Enter the names of three persons:\n");
    for (int i = 0; i < NUMBER_OF_NAMES; i++) {
        printf("Name %d: ", i + 1);
        fgets(names[i], MAX_NAME_LENGTH, stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
    }
    bubbleSort(names, NUMBER_OF_NAMES);
    printf("Sorted names:\n");
    for (int i = 0; i < NUMBER_OF_NAMES; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
