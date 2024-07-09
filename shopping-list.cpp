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
    std::vector<double> prices;
    prices.push_back(10.0);
    prices.push_back(20.0);
    prices.push_back(30.0);

    std::vector<double> discounts;
    discounts.push_back(0.1);
    discounts.push_back(0.2);
    discounts.push_back(0.3);

    double result = hoppingList(prices, discounts);
    std::cout << "The total price of the shopping trip is: " << result << std::endl;
    return 0;
}