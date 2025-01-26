#include <stdlib.h>
#include <stdio.h>

int main() {
    int num;
    float fnum;
    char c;

    // Taking user input
    printf("Enter an Integer: ");
    scanf("%i", &num);

    printf("Enter a Float: ");
    scanf("%f", &fnum);

    getchar();

    printf("Enter a Character: ");
    scanf("%c", &c);

    getchar();

    // Output the entered values
    printf("\n---You Entered---\n");
    printf("Integer: %d\n", num);
    printf("Float: %.2f\n", fnum);
    printf("Character: %c\n", c);

    getchar();
    return 0;
}
