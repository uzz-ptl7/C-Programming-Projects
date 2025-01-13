#include <stdlib.h>
#include <stdio.h>

int main() {
    int age;

    // Taking user input for age
    printf("Enter your Age: ");
    scanf("%i", &age);

    getchar();

    // Conditional checks based on age
    if (age >= 18) {
        printf("User is allowed to log in.\n");
    } else if (age <= 0) {
        printf("Not yet born.\n");
    } else {
        printf("Not allowed to log in.\n");
    }

    getchar();
    return 0;
}
