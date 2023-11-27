#include <iostream>
#include <vector>

float calculateTotalPrice(std::vector<float> prices, std::vector<float> discounts) {
    float totalPrice = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        float discountedPrice = prices[i] - (prices[i] * discounts[i] / 100.0);
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    std::vector<float> prices = {10.0, 20.0, 30.0};
    std::vector<float> discounts = {10.0, 15.0, 20.0};

    float totalPrice = calculateTotalPrice(prices, discounts);

    std::cout << "Total price after discounts: " << totalPrice << std::endl;

    return 0;
}