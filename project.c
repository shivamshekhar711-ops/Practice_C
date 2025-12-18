#include<stdio.h>
#include <string.h>

int isPalindromeNumber(int num) {
    int original = num, reversed = 0, remainder;

    while (num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    return original == reversed;
}

int main() {

    int choice;
    float a, b;

    while (1) {

        printf("\n MENU \n");
        printf("1 Addition\n");
        printf("2 Subtraction\n");
        printf("3 Multiplication\n");
        printf("4 Division\n");
        printf("5 Palindrome Check (Number)\n");
        printf("6 Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
        }

        switch (choice) {

          case 1:
                printf("Result: %.2f\n", a + b);
                break;

            case 2:
                printf("Result: %.2f\n", a - b);
                break;

            case 3:
                printf("Result: %.2f\n", a * b);
                break;

            case 4:
                if (b != 0)
                    printf("Result: %.2f\n", a / b);
                else
                    printf("Error! Division by zero.\n");
                break;

            case 5: {
                int num;
                printf("Enter number: ");
                scanf("%d", &num);

                if (isPalindromeNumber(num))
                    printf("%d is a Palindrome.\n", num);
                else
                    printf("%d is NOT a Palindrome.\n", num);
                break;
            }

            case 6:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}