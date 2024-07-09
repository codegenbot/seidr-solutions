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
    std::vector<double> prices(15);
    std::vector<double> discounts(15);

    for (int i = 0; i < prices.size(); i++) {
        std::cin >> prices[i];
    }

    for (int i = 0; i < discounts.size(); i++) {
        std::cin >> discounts[i];
    }

    double result = hoppingList(prices, discounts);
    std::cout << "The total price of the shopping trip is: " << result << std::endl;
    return 0;
}