#include <stdio.h>

void add(int a, int b);
void subtract(int a, int b);
void multiply(int a, int b);
void divide(int a, int b);
void modulus(int a, int b);

int main() {
    int choice, num1, num2;

    while (1) {
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting the program...\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);

        switch (choice) {
            case 1:
                add(num1, num2);
                break;
            case 2:
                subtract(num1, num2);
                break;
            case 3:
                multiply(num1, num2);
                break;
            case 4:
                divide(num1, num2);
                break;
            case 5:
                modulus(num1, num2);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

void add(int a, int b) {
    printf("Addition of %d and %d is %d\n", a, b, a + b);
}

void subtract(int a, int b) {
    printf("Subtraction of %d from %d is %d\n", b, a, a - b);
}

void multiply(int a, int b) {
    printf("Multiplication of %d and %d is %d\n", a, b, a * b);
}

void divide(int a, int b) {
    if (b != 0) {
        printf("Division of %d by %d is %d\n", a, b, a / b);
    } else {
        printf("Error! Division by zero is not allowed.\n");
    }
}

void modulus(int a, int b) {
    if (b != 0) {
        printf("Modulus of %d and %d is %d\n", a, b, a % b);
    } else {
        printf("Error! Modulus by zero is not allowed.\n");
    }
}
