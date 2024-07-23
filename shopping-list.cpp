#include <iostream>
#include <vector>

int calculateTotalPrice(const std::vector<int>& prices, const std::vector<int>& discounts) {
    int total_price = 0;
    for (size_t i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (1 - (discounts[i] / 100));
    }
    return total_price;
}

int main() {
    std::vector<int> prices = {10, 20, 30};
    std::vector<int> discounts = {5, 10, 15};

    int total_price = calculateTotalPrice(prices, discounts);

    std::cout << "Total price after discount: " << total_price << std::endl;

    return 0;
}