#include <stdio.h>

int main() {
    int totalItems;
    float itemPrices,discount,totalBill = 0.0;
    printf("Enter the number of items purchased: ");
    scanf("%d", &totalItems);
    for(int i = 0; i < totalItems; i++) {
        printf("Enter price of item %d: $", i + 1);
        scanf("%f", &itemPrices);
        totalBill += itemPrices;
    }
    if(totalBill >= 1000) {
        discount = totalBill * 0.10; 
    } else if (totalBill >= 500) {
        discount = totalBill * 0.05; 
    } else {
        discount = 0;
    }
    printf("Total bill: $%.2f\n", totalBill);
    printf("Discount applied: $%.2f\n", discount);
    printf("Final amount to be paid: $%.2f\n", totalBill-discount);
    return 0;
}