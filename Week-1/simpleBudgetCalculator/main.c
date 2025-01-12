#include <stdlib.h>
#include <stdio.h>

int main() 
{
    char name[50];
    float income, expenses, savings;

    // Prompting the user for inputs
    printf("Enter your Name: ");
    scanf("%s", name);  // %s is used to read strings

    printf("Enter your Monthly Income: ");
    scanf("%f", &income);

    printf("Enter your Total Expenses: ");
    scanf("%f", &expenses);

    // Calculating remaining savings
    savings = income - expenses;

    // Displaying the results
    printf("\n--- Financial Summary ---\n");
    printf("Name: %s\n", name);
    printf("Monthly Income: %.2f\n", income);
    printf("Total Expenses: %.2f\n", expenses);
    printf("Remaining Savings: %.2f\n", savings);

    // Conditional feedback based on remaining savings
    if (savings > 0) {
        printf("%s, You are saving money this month.\n", name);
    } else if (savings == 0) {
        printf("%s, You have no savings this month.\n", name);
    } else {
        printf("%s, you have overspent this month.\n", name);
    }

    getchar();
    return 0;
}
