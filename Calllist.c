#include <stdio.h>
#define SIZE 100

int main() {
    int stack[SIZE];
    int top = -1;
    int choice, value;

    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push (Add to Call List)\n");
        printf("2. Display Call List\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (top == SIZE - 1) {
                printf("Stack Overflow! Cannot add more calls.\n");
            } else {
                printf("Enter call ID (number): ");
                scanf("%d", &value);
                top++;
                stack[top] = value;
                printf("Call ID %d added to the list.\n", value);
            }
        } else if (choice == 2) {
            if (top == -1) {
                printf("Call list is empty.\n");
            } else {
                printf("Current Call List (Top to Bottom):\n");
                for (int i = top; i >= 0; i--) {
                    printf("%d\n", stack[i]);
                }
            }
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
