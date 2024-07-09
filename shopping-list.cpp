```c++
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
    std::vector<double> prices(3);
    prices[0] = 10.0;
    prices[1] = 20.0;
    prices[2] = 30.0;

    std::vector<double> discounts(3);
    discounts[0] = 0.1;
    discounts[1] = 0.2;
    discounts[2] = 0.3;

    double result = hoppingList(prices, discounts);
    std::cout << "The total price of the shopping trip is: " << result << std::endl;
    return 0;
}