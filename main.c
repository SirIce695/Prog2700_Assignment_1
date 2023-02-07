#include <stdio.h>

int main() {
    //Variables for the program
    float deliveryCost;
    float customerDistance;
    float salesTax;
    float recordCost;
    float totalCost;
    char customerName [100];

    //Program start
    printf("Hipster's Local Vinyl Records - Customer Order Details\n");
    printf("\nEnter the customer's name");
    fgets(customerName, 100, stdin);

    printf("Enter the distance in kilometers for delivery");
    scanf("%f", &customerDistance);

    printf("Enter the cost of records purchased");
    scanf("%f", &recordCost);

    //Calculation for total cost and delivery
    deliveryCost = customerDistance * 15;
    salesTax = (recordCost * .14f);
    totalCost = deliveryCost + recordCost + salesTax;

    //Finalized costing
    printf("\nPurchase summary for %s", customerName);
    printf("\nDelivery Cost: $%.2f", deliveryCost);
    printf("\nPurchase Cost: $%.2f", (recordCost + salesTax));
    printf("\nTotal Cost: $%.2f", totalCost);

    return 0;


}
