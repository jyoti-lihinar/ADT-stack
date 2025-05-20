#include <stdio.h>
#define SIZE 5

int main() {
    int stack[SIZE];
    int top = -1;
    int choice, value;

    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (top == SIZE - 1) {
                printf("Stack Overflow\n");
            } else {
                printf("Enter value to push: ");
                scanf("%d", &value);
                top++;
                stack[top] = value;
                printf("%d pushed to stack\n", value);
            }
        } else if (choice == 2) {
            if (top == -1) {
                printf("Stack Underflow\n");
            } else {
                printf("Popped value: %d\n", stack[top]);
                top--;
            }
        } else if (choice == 3) {
            if (top == -1) {
                printf("Stack is empty\n");
            } else {
                printf("Stack elements:\n");
                for (int i = top; i >= 0; i--) {
                    printf("%d\n", stack[i]);
                }
            }
        } else if (choice == 4) {
            break;
        } else {
            printf("Invalid choice\n");
        }
    }

    return 0;
}
