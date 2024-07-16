```cpp
#include <vector>
#include <iostream>

double shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    double total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] - (prices[i] * (discounts[i] / 100.0));
    }
    return total;
}

int main() {
    int n;
    std::cout << "Enter the number of items: ";
    std::cin >> n;

    std::vector<float> prices(n);
    std::vector<float> discounts(n);

    for (int i = 0; i < n; i++) {
        std::cout << "Enter price and discount for item " << i + 1 << ": ";
        std::cin >> prices[i] >> discounts[i];
    }

    double result = shoppingList(prices, discounts);
    std::cout << "Total cost after applying the discount: $" << result << std::endl;

    return 0;
}