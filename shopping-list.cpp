#include <vector>
#include <iostream>

float calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float total = 0.0f;
    for (int i = 0; i < prices.size(); ++i) {
        total += prices[i] - prices[i] * discounts[i] / 100;
    }
    return total;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<float> prices(n);
    std::vector<float> discounts(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> prices[i];
    }
    for (int i = 0; i < n; ++i) {
        std::cin >> discounts[i];
    }
    
    std::cout << calculateTotalPrice(prices, discounts) << std::endl;

    return 0;
}