```cpp
#include <vector>
#include <iostream>
#include <cmath>
#include <initializer_list>

double shoppingList(std::vector<float> prices, std::vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = price * (discounts[i] / 100);
        total += price - discount;
    }
    return std::round(total * 100) / 100.0;
}

int main() {
    std::vector<float> prices = {10.0f, 20.0f, 30.0f};
    std::vector<float> discounts = {5.0f, 7.5f, 10.0f};
    double total = shoppingList(prices, discounts);
    std::cout << "Total price after discount: " << total << std::endl;
    return 0;
}