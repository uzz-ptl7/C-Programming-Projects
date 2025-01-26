#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to greet the user
void greetUser(char name[]) {
    printf("Hello, %s! Welcome to Dreamizer's Programming Class!\n", name);
}

// Function to thank the user
char* thankUser() {
    return "Thank you for practicing coding today!";
}

int main() {
    char name[50];

    // Prompt the user to enter their name
    printf("Enter your name: ");
    scanf("%49s", name);

    getchar();

    // Call greetUser function
    greetUser(name);

    // Call thankUser function and print the returned message
    char* message = thankUser();
    printf("%s\n", message);

    getchar();
    return 0;
}
