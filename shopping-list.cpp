#include <cstdio>

double shoppingList(float prices[], int nPrices, float discounts[]) {
    double total = 0;
    for (int i = 0; i < nPrices; i++) {
        total += prices[i] * ((1 - discounts[i]/100.0));
    }
    return total;
}

int main() {
    int nItems;
    printf("Number of items: ");
    scanf("%d", &nItems);
    float prices[nItems];
    for(int i = 0; i < nItems; i++) {
        printf("Price of item %d: ", i+1);
        scanf("%f", &prices[i]);
    }

    float discounts[nItems];
    for(int i = 0; i < nItems; i++) {
        printf("Discount of item %d (in percent): ", i+1);
        scanf("%f", &discounts[i]);
    }
    double totalPrice = shoppingList(prices, nItems, discounts);
    printf("Total price: %f\n", totalPrice); 
    return 0;
}