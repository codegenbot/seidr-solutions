#include <cstdio>
#include <vector>

double shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i]/100.0);
    }
    return total;
}

int main() {
    int nItems;
    printf("Number of items: ");
    scanf("%d", &nItems);

    std::vector<float> prices(nItems);
    for(int i = 0; i < nItems; i++) {
        printf("Price of item %d: ", i+1);
        scanf("%f", &prices[i]);
    }

    std::vector<float> discounts(nItems);
    for(int i = 0; i < nItems; i++) {
        printf("Discount of item %d (in percent): ", i+1);
        scanf("%f", &discounts[i]);
    }
    double totalPrice = shoppingList(prices, discounts);
    printf("Total price: %f\n", totalPrice); 
    return 0;
}