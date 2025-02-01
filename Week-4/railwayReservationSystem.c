#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_TRAINS 5

// Structure to store train details
typedef struct
{
    int trainNumber;
    char destination[50];
    int availableSeats;
    int price;
} Train;

Train trains[MAX_TRAINS] = {
    {101, "Kigali", 30, 5000},
    {102, "Musanze", 25, 4500},
    {103, "Huye", 40, 5500},
    {104, "Rubavu", 20, 6000},
    {105, "Nyundo", 35, 5200}};

// Function to display available trains
void viewAvailableTrains()
{
    printf("\nAvailable Trains:\n");
    for (int i = 0; i < MAX_TRAINS; i++)
    {
        printf("Train No: %d, Destination: %s, Available Seats: %d, Price: %d RWF\n",
               trains[i].trainNumber, trains[i].destination, trains[i].availableSeats, trains[i].price);
    }
}

// Function to book tickets
void bookTickets()
{
    int trainNum, seats;
    printf("\nEnter Train Number: ");
    scanf("%d", &trainNum);

    printf("Enter Number of Seats: ");
    scanf("%d", &seats);

    for (int i = 0; i < MAX_TRAINS; i++)
    {
        if (trains[i].trainNumber == trainNum)
        {
            if (seats <= trains[i].availableSeats)
            {
                trains[i].availableSeats -= seats;
                printf("Booking successful! Remaining Seats: %d\n", trains[i].availableSeats);
            }
            else
            {
                printf("Not enough seats available.\n");
            }
            return;
        }
    }
    printf("Invalid Train Number.\n");
}

// Function to cancel tickets
void cancelTickets()
{
    int trainNum, seats;
    printf("\nEnter Train Number: ");
    scanf("%d", &trainNum);

    printf("Enter Number of Seats to Cancel: ");
    scanf("%d", &seats);

    for (int i = 0; i < MAX_TRAINS; i++)
    {
        if (trains[i].trainNumber == trainNum)
        {
            trains[i].availableSeats += seats;
            printf("Cancellation successful! Remaining Seats: %d\n", trains[i].availableSeats);
            return;
        }
    }
    printf("Invalid Train Number.\n");
}

// Function to convert a string to lowercase
void toLowerCase(char *str)
{
    for (int i = 0; str[i]; i++)
    {
        str[i] = tolower(str[i]);
    }
}

// Function to search trains by destination
void searchTrains()
{
    char destination[50], temp[50];
    int found = 0;

    printf("\nEnter Destination: ");
    scanf("%s", destination);
    toLowerCase(destination);

    printf("\nMatching Trains:\n");
    for (int i = 0; i < MAX_TRAINS; i++)
    {
        strcpy(temp, trains[i].destination);
        toLowerCase(temp);

        if (strcmp(destination, temp) == 0)
        {
            printf("Train No: %d, Destination: %s, Available Seats: %d, Price: %d RWF\n",
                   trains[i].trainNumber, trains[i].destination, trains[i].availableSeats, trains[i].price);
            found = 1;
        }
    }

    if (!found)
    {
        printf("No trains found for this destination.\n");
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
            printf("Exiting the system.\n");
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}