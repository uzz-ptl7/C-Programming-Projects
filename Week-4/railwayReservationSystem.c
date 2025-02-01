#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structure for train details
struct Train
{
    int number;
    char destination[20];
    int availableSeats;
    int price;
    int bookedSeats; // Track booked seats for validation
};

// Global train array
struct Train trains[] = {
    {101, "Kigali", 30, 5000, 0},
    {102, "Musanze", 25, 4500, 0},
    {103, "Rubavu", 15, 3500, 0},
    {104, "Nyundo", 20, 4000, 0},
    {105, "Huye", 10, 3000, 0}};

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

    for (i = 0; i < numTrains; i++)
    {
        if (trains[i].number == trainNumber)
        {
            found = 1;
            printf("Enter number of seats to book: ");
            scanf("%d", &seatsToBook);
            getchar();

            if (seatsToBook > 0 && seatsToBook <= trains[i].availableSeats)
            {
                trains[i].availableSeats -= seatsToBook;
                trains[i].bookedSeats += seatsToBook;
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

// Function to cancel tickets
void cancelTickets()
{
    int trainNumber, seatsToCancel, i, found = 0;

    printf("\nEnter Train Number to cancel tickets: ");
    scanf("%d", &trainNumber);
    getchar();

    for (i = 0; i < numTrains; i++)
    {
        if (trains[i].number == trainNumber)
        {
            found = 1;
            printf("Enter number of seats to cancel: ");
            scanf("%d", &seatsToCancel);
            getchar();

            if (seatsToCancel > 0 && seatsToCancel <= trains[i].bookedSeats)
            {
                trains[i].availableSeats += seatsToCancel;
                trains[i].bookedSeats -= seatsToCancel;
                printf("✅ Cancellation successful! %d seats canceled on Train No: %d to %s.\n",
                       seatsToCancel, trainNumber, trains[i].destination);
                printf("Remaining Seats: %d\n", trains[i].availableSeats);
            }
            else
            {
                printf("❌ Invalid cancellation request. Either no seats booked or invalid input.\n");
            }
            break;
        }
    }

    if (!found)
    {
        printf("❌ Train not found. Please enter a valid train number.\n");
    }
}

// Function to search trains by destination
void searchTrains()
{
    char destination[20];
    int found = 0;

    printf("\nEnter destination to search for trains: ");
    scanf("%s", destination);
    getchar();

    printf("\nTrains going to %s:\n", destination);
    for (int i = 0; i < numTrains; i++)
    {
        if (strcmp(trains[i].destination, destination) == 0)
        {
            found = 1;
            printf("Train No: %d, Available Seats: %d, Price: %d RWF\n",
                   trains[i].number, trains[i].availableSeats, trains[i].price);
        }
    }

    if (!found)
    {
        printf("❌ No trains found for the destination: %s.\n", destination);
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\nRailway Reservation System\n");
        printf("1. View available trains\n");
        printf("2. Book tickets\n");
        printf("3. Cancel tickets\n");
        printf("4. Search by destination\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        case 1:
            viewAvailableTrains();
            break;
        case 2:
            bookTickets();
            break;
        case 3:
            cancelTickets();
            break;
        case 4:
            searchTrains();
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
