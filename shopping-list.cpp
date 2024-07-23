#include <iostream>
#include <vector>
#include <iomanip>

float calculateTotalPrice(std::vector<float> prices, std::vector<float> discounts) {
    float total = 0.0;
    int min_size = std::min(prices.size(), discounts.size());
    for (int i = 0; i < min_size; ++i) {
        float discounted_price = prices[i] * (1.0 - discounts[i] / 100.0);
        total += discounted_price;
    }
    return total;
}

int main() {
    std::vector<float> prices;
    std::vector<float> discounts;

    int n;
    std::cin >> n;

    float price, discount;
    for (int i = 0; i < n; ++i) {
        std::cin >> price;
        prices.push_back(price);
    }

    for (int i = 0; i < n; ++i) { // corrected loop condition
        std::cin >> discount;
        discounts.push_back(discount);
    }

    float total_price = calculateTotalPrice(prices, discounts);
    std::cout << std::fixed << std::setprecision(2) << "Total price after discounts: " << total_price << std::endl;
    return 0;
}