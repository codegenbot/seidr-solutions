#include <vector>
#include <iostream>

float applyDiscount(std::vector<float> prices, std::vector<float> discounts) {
    float totalPrice = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        totalPrice += prices[i] - (prices[i] * (discounts[i] / 100));
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

    int m;
    std::cin >> m;

    std::vector<float> discounts(m);
    for (int i = 0; i < m; i++) {
        std::cin >> discounts[i];
    }

    float totalPrice = applyDiscount(prices, discounts);
    std::cout << totalPrice << std::endl;

    return 0;
}