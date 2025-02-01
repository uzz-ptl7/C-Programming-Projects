#include <stdio.h>
#include <stdlib.h>

// Define structure for train details
struct Train
{
    int number;
    char destination[20];
    int availableSeats;
    int price;
};

// Function to display available trains
void viewAvailableTrains()
{
    struct Train trains[] = {
        {101, "Kigali", 30, 5000},
        {102, "Musanze", 25, 4500},
        {103, "Rubavu", 15, 3500},
        {104, "Nyundo", 20, 4000},
        {105, "Huye", 10, 3000}};

    int numTrains = sizeof(trains) / sizeof(trains[0]);

    printf("\nAvailable Trains:\n");
    for (int i = 0; i < numTrains; i++)
    {
        printf("Train No: %d, Destination: %s, Available Seats: %d, Price: %d RWF\n",
               trains[i].number, trains[i].destination, trains[i].availableSeats, trains[i].price);
    }
}

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
        getchar(); // Consume newline

        // Process user choice using switch
        switch (choice)
        {
        case 1:
            viewAvailableTrains();
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

        printf("\nPress Enter to continue...");
        getchar(); // Wait for user input before clearing the screen
    }

    return 0;
}