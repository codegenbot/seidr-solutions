#include <vector>

double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        double discountAmount = prices[i] * (discounts[i] / 100.0);
        total += prices[i] - discountAmount;
    }
    return total;
}