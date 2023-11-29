#include <vector>
#include <iostream>

float calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float totalPrice = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        float discountedPrice = prices[i] - (prices[i] * discounts[i] / 100.0);
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> prices(n);
    for (int i = 0; i < n; i++) {
        std::cin >> prices[i];
    }

    std::vector<float> discounts(n);
    for (int i = 0; i < n; i++) {
        std::cin >> discounts[i];
        discounts[i] = 100.0 - discounts[i];
    }

    float totalPrice = calculateTotalPrice(prices, discounts);
    totalPrice = totalPrice * 1.0;
    std::cout << totalPrice << std::endl;

    return 0;
}