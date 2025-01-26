#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float amount;
    char recipient[50];
    float balance = 10000.0; // Mock balance

    // Display the menu
    printf("Welcome to MTN Mobile Services:\n");
    printf("Select an option:\n");
    printf("1. Airtime Recharge\n");
    printf("2. Internet Bundle\n");
    printf("3. Mobile Money Transfer\n");
    printf("4. Check Balance\n");

    // Prompt user to choose an option
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    getchar();

    // Handle choices using switch statement
    switch (choice)
    {
    case 1:
        printf("Enter amount for airtime recharge: ");
        scanf("%f", &amount);
        getchar();
        printf("Airtime recharge of %.2f completed successfully!\n", amount);
        break;

    case 2:
        printf("Enter amount for internet bundle: ");
        scanf("%f", &amount);
        getchar();
        if (amount >= 500)
        {
            printf("Internet bundle purchase of %.2f completed successfully!\n", amount);
        }
        else
        {
            printf("Error: Amount must be at least 500 to purchase a valid internet bundle.\n");
        }
        break;

    case 3:
        printf("Enter recipient's name: ");
        scanf("%s", recipient);
        getchar();
        printf("Enter amount to transfer: ");
        scanf("%f", &amount);
        getchar();
        if (amount <= balance)
        {
            balance -= amount;
            printf("Successfully transferred %.2f to %s.\n", amount, recipient);
            printf("Your new balance is %.2f.\n", balance);
        }
        else
        {
            printf("Error: Insufficient balance.\n");
        }
        break;

    case 4:
        printf("Your current balance is %.2f.\n", balance);
        break;

    default:
        printf("Error: Invalid option. Please try again.\n");
    }

    getchar();
    return 0;
}
