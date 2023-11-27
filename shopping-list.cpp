#include <iostream>
#include <vector>
#include <stdexcept>

float calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
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
    std::vector<float> prices = {10.0, 20.0, 30.0};
    std::vector<float> discounts = {5.0, 10.0, 15.0};

    float totalPrice = calculateTotalPrice(prices, discounts);
    std::cout << "Total Price: " << totalPrice << std::endl;

    return 0;
}