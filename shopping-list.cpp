#include <iostream>
#include <vector>

double shoppingList(std::vector<float> prices, std::vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = price * (1 - discounts[i] / 100.0);
        total += discount; 
    }
    return total;
}

int main() {
    std::vector<float> prices = {10.0f, 20.0f, 30.0f};
    std::vector<float> discounts = {5.0f, 10.0f, 15.0f};

    double result = shoppingList(prices, discounts);
    std::cout << "Total price after applying the discount is: $" << result << std::endl;
    return 0;
}