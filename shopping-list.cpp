#include <iostream>
#include <vector>

float calculateDiscountedPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float total = 0.0;

    for (int i = 0; i < prices.size(); i++) {
        float discount = discounts[i] / 100.0;
        float discountedPrice = prices[i] - (prices[i] * discount);
        total += discountedPrice;
    }

    return total;
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
    }

    float totalPrice = calculateDiscountedPrice(prices, discounts);
    std::cout << totalPrice << std::endl;

    return 0;
}