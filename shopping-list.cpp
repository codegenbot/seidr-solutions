```cpp
#include <vector>
#include <iostream>

double hoppingList(std::vector<double> prices, std::vector<double> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i]);
    }
    return total;
}

int main() {
    std::vector<double> prices = {10.99, 20.99, 5.99};
    std::vector<double> discounts = {0.1, 0.2, 0.05};
    double totalCost = hoppingList(prices, discounts);
    std::cout << "Total cost after applying discount: $" << totalCost << std::endl;
    return 0;
}