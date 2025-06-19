#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int value) {
    if(top == SIZE - 1) {
        printf("Stack is full!\n");
    } else {
        top++;
        stack[top] = value;
        printf("Pushed: %d\n", value);
    }
}

void pop() {
    if(top == -1) {
        printf("Stack is empty!\n");
    } else {
        printf("Popped: %d\n", stack[top]);
        top--;
    }
}

void peek() {
    if(top == -1) {
        printf("Stack is empty!\n");
    } else {
        printf("Top element: %d\n", stack[top]);
    }
}

int main() {
    int choice, value;

    do {
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Exit\n");
        printf("Choose: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Enter value: ");
            scanf("%d", &value);
            push(value);
        } else if(choice == 2) {
            pop();
        } else if(choice == 3) {
            peek();
        } else if(choice == 4) {
            printf("Exiting...\n");
        } else {
            printf("Invalid choice!\n");
        }
    } while(choice != 4);

    return 0;
}

