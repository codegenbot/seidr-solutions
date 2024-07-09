#include <vector>
#include <iostream>

double shoppingList(std::vector<float> prices, std::vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - (discounts[i] / 100.0));
    }
    return total;
}

int main() {
    std::vector<float> prices(15);
    std::vector<float> discounts(15);

    for(int i = 0; i < 15; i++) {
        std::cin >> prices[i];
    }

    for(int i = 0; i < 15; i++) {
        std::cin >> float(discounts[i]);
    }

    double total = shoppingList(prices, discounts);

    std::cout << "The total price after applying the discount is: $" << total << std::endl;

    return 0;
}