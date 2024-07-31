#include <stdio.h>

// Function to print the bill
void printBill(char items[][30], int quantities[], float prices[], int itemCount) {
    float total = 0;
    printf("------------- Automobile Industry Bill -------------\n");
    printf("%-20s %-10s %-10s\n", "Item", "Quantity", "Price");

    for(int i = 0; i < itemCount; i++) {
        float itemTotal = quantities[i] * prices[i];
        total += itemTotal;
        printf("%-20s %-10d $%-10.2f\n", items[i], quantities[i], itemTotal);
    }

    printf("----------------------------------------------------\n");
    printf("Total: $%.2f\n", total);
}

int main() {
    // Example data
    char items[5][30] = {"Engine Oil", "Brake Pads", "Air Filter", "Tires", "Spark Plugs"};
    int quantities[5] = {10, 4, 6, 8, 12};
    float prices[5] = {25.5, 15.0, 7.5, 80.0, 5.0};
    int itemCount = 5;

    // Print the bill
    printBill(items, quantities, prices, itemCount);

    return 0;
}
