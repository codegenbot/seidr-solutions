#include <iostream>
#include <vector>

double shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i] / 100.0);
    }
    return total;
}

int main() {
    int numItems;
    std::cin >> numItems;

    std::vector<float> prices(numItems);
    float price;
    for (int i = 0; i < numItems; i++) {
        std::cin >> price;
        prices[i] = price;
    }

    std::vector<float> discounts(numItems);
    for (int i = 0; i < numItems; i++) {
        std::cin >> discounts[i];
    }
    
    double result = shoppingList(prices, discounts);
    std::cout << "Total price after discount: $" << result << std::endl;
    return 0;
}