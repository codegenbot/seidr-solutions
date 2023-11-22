#include <vector>
#include <iostream>

double calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    double totalPrice = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        double discountedPrice = prices[i] - (prices[i] * discounts[i] / 100);
        totalPrice += discountedPrice;
    }
    return totalPrice;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<float> prices(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> prices[i];
    }
    std::cin >> n;
    std::vector<float> discounts(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> discounts[i];
    }
    double totalPrice = calculateTotalPrice(prices, discounts);
    std::cout << totalPrice << std::endl;
    return 0;
}