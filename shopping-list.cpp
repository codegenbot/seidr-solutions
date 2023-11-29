#include <iostream>
#include <vector>

float calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float totalPrice = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        float discountAmount = prices[i] * discounts[i] / 100.0;
        float discountedPrice = prices[i] - discountAmount;
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    std::vector<float> prices = {10.0, 15.0, 20.0};
    std::vector<float> discounts = {10.0, 20.0, 30.0};

    float total = calculateTotalPrice(prices, discounts);
    std::cout << "Total price after discount: " << total << std::endl;

    return 0;
}