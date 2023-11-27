#include <vector>
#include <stdexcept>
#include <iostream>

float calculateTotalPrice(std::vector<float> prices, std::vector<float> discounts) {
    if (prices.size() != discounts.size()) {
        throw std::invalid_argument("Input vectors must have the same number of elements.");
    }

    float totalPrice = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        float discountedPrice = prices[i] - (prices[i] * discounts[i] / 100);
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    std::vector<float> prices = {10.20, 15.40, 20.30};
    std::vector<float> discounts = {10.0, 20.0, 30.0};

    float total = calculateTotalPrice(prices, discounts);
    std::cout << "Total price after discount: " << total << std::endl;

    return 0;
}