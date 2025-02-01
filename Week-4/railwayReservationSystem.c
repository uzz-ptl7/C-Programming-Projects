#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;

    while (1)
    {
        // Display menu options
        printf("\nRailway Reservation System\n");
        printf("1. View available trains\n");
        printf("2. Book tickets\n");
        printf("3. Cancel tickets\n");
        printf("4. Search by destination\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        getchar();

        // Process user choice using switch
        switch (choice)
        {
        case 1:
            printf("View available trains feature coming soon!\n");
            break;
        case 2:
            printf("Book tickets feature coming soon!\n");
            break;
        case 3:
            printf("Cancel tickets feature coming soon!\n");
            break;
        case 4:
            printf("Search by destination feature coming soon!\n");
            break;
        case 5:
            printf("Exiting the system. Thank you!\n");
            exit(0);
        default:
            printf("Invalid choice! Please select a valid option.\n");
        }
    }

    getchar();
    return 0;
}
