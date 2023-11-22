#include <iostream>
#include <vector>

float calculateTotalPrice(std::vector<float> prices, std::vector<float> discounts) {
    float total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        float discountedPrice = prices[i] * (1 - discounts[i] / 100);
        total += discountedPrice;
    }
    return total;
}

int main() {
    int numGoods;
    std::cin >> numGoods;

    std::vector<float> prices(numGoods);
    for (int i = 0; i < numGoods; i++) {
        std::cin >> prices[i];
    }

    std::vector<float> discounts(numGoods);
    for (int i = 0; i < numGoods; i++) {
        std::cin >> discounts[i];
    }

    float totalPrice = calculateTotalPrice(prices, discounts);
    std::cout << totalPrice << std::endl;

    return 0;
}