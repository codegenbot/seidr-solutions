#include <iostream>
#include <vector>
#include <iomanip>

float calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float total_price = 0.0;
    for (int i = 0; i < std::min(prices.size(), discounts.size()); ++i) {
        total_price += prices[i] * (1.0 - discounts[i] / 100.0);
    }
    return total_price;
}

int main() {
    std::vector<float> prices = {49.01, 48.92, 5.26, 2.97, 45.13, 27.93, 30.89, 22.65, 28.26, 5.11, 6.68};
    std::vector<float> discounts = {37.1, 0.55, 73.93, 45.95, 6.37, 53.46, 11.91, 60.74, 40.9, 5.62, 66.44, 10.0};

    float total_price = calculateTotalPrice(prices, discounts);
    std::cout << "Total price after discount: " << std::fixed << std::setprecision(2) << total_price << std::endl;

    return 0;
}