#include <iostream>
#include <vector>

float calculateTotalPrice(vector<float>& prices, vector<float>& discounts) {
    float total = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        total += prices[i] * (1.0 - discounts[i] / 100.0);
    }
    return total;
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

    float total = calculateTotalPrice(prices, discounts);
    std::cout << total << std::endl;

    return 0;
}