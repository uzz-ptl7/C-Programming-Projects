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

// Global train array
struct Train trains[] = {
    {101, "Kigali", 30, 5000},
    {102, "Musanze", 25, 4500},
    {103, "Rubavu", 15, 3500},
    {104, "Nyundo", 20, 4000},
    {105, "Huye", 10, 3000}};

int numTrains = sizeof(trains) / sizeof(trains[0]);

// Function to display available trains
void viewAvailableTrains()
{
    printf("\nAvailable Trains:\n");
    for (int i = 0; i < numTrains; i++)
    {
        printf("Train No: %d, Destination: %s, Available Seats: %d, Price: %d RWF\n",
               trains[i].number, trains[i].destination, trains[i].availableSeats, trains[i].price);
    }
}

// Function to book tickets
void bookTickets()
{
    int trainNumber, seatsToBook, i, found = 0;

    printf("\nEnter Train Number to book tickets: ");
    scanf("%d", &trainNumber);
    getchar();

    // Search for train
    for (i = 0; i < numTrains; i++)
    {
        if (trains[i].number == trainNumber)
        {
            found = 1;
            printf("Enter number of seats to book: ");
            scanf("%d", &seatsToBook);
            getchar();

            // Check seat availability
            if (seatsToBook > 0 && seatsToBook <= trains[i].availableSeats)
            {
                trains[i].availableSeats -= seatsToBook;
                printf("✅ Booking successful! %d seats booked on Train No: %d to %s.\n",
                       seatsToBook, trainNumber, trains[i].destination);
                printf("Remaining Seats: %d\n", trains[i].availableSeats);
            }
            else
            {
                printf("❌ Not enough seats available or invalid input. Try again.\n");
            }
            break;
        }
    }

    if (!found)
    {
        printf("❌ Train not found. Please enter a valid train number.\n");
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
        getchar();

        // Process user choice using switch
        switch (choice)
        {
        case 1:
            viewAvailableTrains();
            break;
        case 2:
            bookTickets();
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
        getchar();
    }

    return 0;
}