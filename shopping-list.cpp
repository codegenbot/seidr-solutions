#include <iostream>
#include <vector>
#include <iomanip>

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
    std::vector<float> prices = {23.5, 1.04, 17.55};
    std::vector<float> discounts = {47.46, 4.27, 89.54};

    float totalPrice = calculateTotalPrice(prices, discounts);
    std::cout << std::fixed << std::setprecision(2) << "Total Price: " << totalPrice << std::endl;

    return 0;
}