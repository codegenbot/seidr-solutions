```cpp
#include <vector>
#include <iostream>

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
    std::vector<float> prices = {10.0, 20.0, 30.0};
    std::vector<float> discounts = {5.0, 10.0, 15.0};
    double result = shoppingList(prices, discounts);
    std::cout << "Total price after applying the discount is: $" << result << std::endl;
    return 0;
}