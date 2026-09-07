#include <stdio.h>

int main() {
    int n, i;
    char item[50][20];
    int quantity[50];
    float price[50],total[50];
    float garndTotal = 0;

    printf("=====================================\n");
    printf("             BILLING SYSTEM\n");
    printf("=====================================\n");

    printf("Enter the number of items: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
     {
        printf("\nItem %d\n", i+ 1);

        printf("Enter the item name: ");
        scanf("%s", item[i]);

        printf("Enter the quantity: ");
        scanf("%d", &quantity[i]);

        printf("Enter the price: ");
        scanf("%f", &price[i]);

        total[i]= quantity[i] * price[i];
        grandTotal = grandTotal + total[i];
    }
    printf("\n=====================================\n");
    printf("           BILL\n");
    printf("=====================================\n");
      
    printf("%-15s %-8s %-10s %-10s\n",
         "Item", "Quantity", "Price", "Total");

    for(i = 0; i < n; i++)
    {
        printf("%-15s %-8s %-10.2f %-10.2f\n",
             item[i], quantity[i], price[i], total[i]);
    } 
    printf("=====================================\n");
    printf("           Thank You! Visit Again! \n");
    printf("=====================================\n");

return 0;
        
}
