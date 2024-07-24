#include <iostream>
#include <vector>

float calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float total = 0.0;
    for (size_t i = 0; i < prices.size(); i++) {
        total += prices[i] - prices[i] * discounts[i] / 100.0;
    }
    return total;
}

int main() {
    std::vector<float> prices, discounts;
    float price, discount;

    while (std::cin >> price) {
        prices.push_back(price);
    }

    while (std::cin >> discount) {
        discounts.push_back(discount);
    }

    float totalPrice = calculateTotalPrice(prices, discounts);

    std::cout << "Total price after discount: " << totalPrice << std::endl;

    return 0;
}