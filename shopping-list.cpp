#include <vector>
#include <iostream>

float calculateTotalPrice(std::vector<float>& prices, std::vector<float>& discounts) {
    float totalPrice = 0;
    for (int i = 0; i < prices.size(); i++) {
        float discountAmount = prices[i] * discounts[i] / 100;
        float discountedPrice = prices[i] - discountAmount;
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

    int m;
    std::cin >> m;
    std::vector<float> discounts(m);
    for (int i = 0; i < m; i++) {
        std::cin >> discounts[i];
    }

    float totalPrice = calculateTotalPrice(prices, discounts);
    std::cout << totalPrice << std::endl;

    return 0;
}