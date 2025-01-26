#include <stdio.h>
#include <stdlib.h>

void orderPizza()
{
    float price = 12.99;
    printf("You have ordered a Pizza!\nPrice: $%.2f\n", price);
}

void orderBurger()
{
    float price = 8.99;
    printf("You have ordered a Burger!\nPrice: $%.2f\n", price);
}

void orderPasta()
{
    float price = 10.49;
    printf("You have ordered Pasta!\nPrice: $%.2f\n", price);
}

void orderSalad()
{
    float price = 7.99;
    printf("You have ordered a Salad!\nPrice: $%.2f\n", price);
}

int main()
{
    int choice;

    printf("Welcome to the Food Order System!\n");
    printf("Please select an item from the menu below:\n");
    printf("1. Pizza ($12.99)\n");
    printf("2. Burger ($8.99)\n");
    printf("3. Pasta ($10.49)\n");
    printf("4. Salad ($7.99)\n");
    printf("Enter the number of your choice (1-4): ");
    scanf("%d", &choice);
    getchar();

    switch (choice)
    {
    case 1:
        orderPizza();
        break;
    case 2:
        orderBurger();
        break;
    case 3:
        orderPasta();
        break;
    case 4:
        orderSalad();
        break;
    default:
        printf("Invalid choice! Please select a valid option (1-4).\n");
        return 1;
    }

    printf("Thank you for your order! Goodbye!\n");

    getchar();
    return 0;
}
