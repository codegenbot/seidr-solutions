#include <iostream>
#include <vector>

double shoppingList(std::vector<float> prices, std::vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        double discount = prices[i] * (1 - discounts[i] / 100.0);
        total += discount; 
    }
    return total;
}

int main() {
    std::vector<float> prices = {40.51, 26.21, 45.48, 46.02, 37.5, 44.03, 27.39, 8.01, 43.21};
    std::vector<float> discounts = {9, 79.19, 32.87, 12.77, 88.87, 0.74, 76.16, 14.02, 46.6};

    double result = shoppingList(prices, discounts);
    std::cout << "Total price after applying the discount is: $" << result << std::endl;
    return 0;
}