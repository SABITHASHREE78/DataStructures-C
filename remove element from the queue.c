#include <stdio.h>
#define MAX_SIZE 100 
int queue[MAX_SIZE]; 
int front = -1; 
int back = -1; 
void enqueue(int item) {
    if (back == MAX_SIZE - 1) { 
        printf("Error: Queue is full\n"); 
        return; 
    }
    if (front == -1) { 
        front = 0; 
    }
    back++; 
    queue[back] = item; 
}

void dequeue() {
    if (front == -1 || front > back) { 
        printf("Error: Queue is empty\n"); 
        return; 
    }
    front++; 
}

void display() {
    if (front == -1 || front > back) { /
        printf("Queue is empty\n"); 
        return; 
    }
    printf("Queue elements are: ");
    for (int i = front; i <= back; i++) { 
        printf("%d ", queue[i]); 
    }
    printf("\n");

int main() {
    printf("Initialize a queue!"); 
    printf("\nInsert some elements into the queue:\n"); 
    enqueue(1); 
    enqueue(2); 
    enqueue(3); 
    display(); 
    printf("\nDelete an element from the queue:\n"); 
    dequeue(); 
    display(); 
    printf("\nInsert another element into the queue:\n"); 
    enqueue(4);
    display();
    return 0;
}
