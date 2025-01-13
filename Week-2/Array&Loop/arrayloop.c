#include <stdio.h>
#include <stdlib.h>

int main() {
    int Grades[] = {45, 60, 49, 10, 56, 78, 90, 100, 21, 56};
    int size = sizeof(Grades) / sizeof(Grades[0]);
    int i = 0;

    while (i < size) {
        printf("Grade %d: %d\n", i + 1, Grades[i]);
        i++;
    }

    getchar();
    return 0;
}
