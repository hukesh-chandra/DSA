#include <stdio.h>

int main(){
    int unitConsumed;
    float totalBill;
    printf("Enter units of electricity consumed: ");
    scanf("%d", &unitConsumed);
    if(unitConsumed <= 50){
        totalBill = unitConsumed * 0.50;
    } else if(unitConsumed <= 150){
        totalBill = (50 * 0.50) + ((unitConsumed - 50) * 0.75);
    } else if(unitConsumed <= 250){
        totalBill = (50 * 0.50) + (100 * 0.75) + ((unitConsumed - 150) * 1.20);
    } else{
        totalBill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((unitConsumed - 250) * 1.50);
    }
    float surcharge = totalBill * 0.20;
    totalBill += surcharge;
    printf("Total electricity bill: Rs.%.2f\n", totalBill);
    return 0;
}