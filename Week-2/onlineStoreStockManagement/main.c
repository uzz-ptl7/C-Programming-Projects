#include <stdio.h>
#include <stdlib.h>

int main() {
    // Array initialization
    int stock[] = {10, 50, 30, 15, 25};
    int size = sizeof(stock) / sizeof(stock[0]);
    int totalStock = 0;
    double averageStock;

    // Display stock quantities
    printf("Stock quantities of products:\n");
    for (int i = 0; i < size; i++) {
        printf("Product %d Stock: %d\n", i + 1, stock[i]);
    }

    // Calculate total stock
    for (int i = 0; i < size; i++) {
        totalStock += stock[i];
    }

    // Calculate average stock
    averageStock = (double)totalStock / size;

    // Display total and average stock
    printf("\nTotal stock: %d\n", totalStock);
    printf("\nAverage stock: %.2f\n", averageStock);

    getchar();
    return 0;
}
