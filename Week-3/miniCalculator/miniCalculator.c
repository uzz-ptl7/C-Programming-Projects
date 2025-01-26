#include <stdio.h>
#include <stdlib.h>

// Functions
void addition(float a, float b)
{
    printf("Result: %.2f\n", a + b);
}

void subtraction(float a, float b)
{
    printf("Result: %.2f\n", a - b);
}

void multiplication(float a, float b)
{
    printf("Result: %.2f\n", a * b);
}

void division(float a, float b)
{
    if (b != 0)
    {
        printf("Result: %.2f\n", a / b);
    }
    else
    {
        printf("Error: Division by zero is not allowed.\n");
    }
}

// Main function
int main()
{
    int choice;
    float num1, num2;

    printf("Welcome to the Calculator!\n");

    printf("Enter the first number: ");
    scanf("%f", &num1);
    getchar();
    printf("Enter the second number: ");
    scanf("%f", &num2);
    getchar();

    printf("Select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter the number corresponding to the operation (1-4): ");
    scanf("%d", &choice);
    getchar();

    switch (choice)
    {
    case 1:
        addition(num1, num2);
        break;
    case 2:
        subtraction(num1, num2);
        break;
    case 3:
        multiplication(num1, num2);
        break;
    case 4:
        division(num1, num2);
        break;
    default:
        printf("Invalid choice! Please select a valid operation (1-4).\n");
        return 1;
    }

    getchar();
    return 0;
}
